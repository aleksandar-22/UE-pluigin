// Copyright 2022 Convai Inc. All Rights Reserved.


#include "WordListSearchUtils.h"
#include "Misc/FileHelper.h"
#include "Containers/UnrealString.h"
#include "../WordListSearch.h"

DEFINE_LOG_CATEGORY(WordListSearchLog);


TMap<TCHAR, TSet<uint32>> UWordListSearch::WordsDictonary;
TArray<FString> UWordListSearch::WordsToSearch;
TArray<uint16> UWordListSearch::WordLengths;
TMap<TCHAR, uint32> UWordListSearch::LetterScoresMap;
TArray<uint16> UWordListSearch::WordScores;

namespace
{
	TArray<uint32> SortWordsByCount(TArray<uint32> WordIndices)
	{
		TArray<uint32> SortedArray;
		TMap<uint32, uint16> WordLengthsMap;
		WordLengthsMap.Empty(WordIndices.Num());

		for (uint32 i : WordIndices)
		{
			WordLengthsMap.Add(i);
			WordLengthsMap[i] = UWordListSearch::WordLengths[i];
		}

		WordLengthsMap.ValueSort([](uint16 A, uint16 B)
			{
				return A < B;
			});
		WordLengthsMap.GenerateKeyArray(SortedArray);
		return SortedArray;
	}

	TMap<TCHAR, uint8> CountLetters(FString Letters)
	{
		TMap<TCHAR, uint8> LetterCounts;
		for (TCHAR c : Letters)
		{
			LetterCounts.FindOrAdd(c);
			LetterCounts[c] += 1;
		}
		return LetterCounts;
	}

	int CalculateScore(FString word)
	{
		int score = 0;
		for (TCHAR c : word)
		{
			if (UWordListSearch::LetterScoresMap.Find(c))
				score += UWordListSearch::LetterScoresMap[c];
		}
		//UE_LOG(WordListSearchLog, Warning, TEXT("Score for word %s : %d"), *word, score);

		return score;
	}
}

void UWordListSearch::InitWordDictionary(TArray<FString> Words, TArray<FString> Letters, TArray<FString> LetterScores)
{
	WordsDictonary.Empty(48);
	WordLengths.Empty(Words.Num());
	WordScores.Empty(Words.Num());
	WordsToSearch = Words;
	LetterScoresMap.Empty();

	for (int i = 0; i < WordsToSearch.Num(); i++)
		WordsToSearch[i].ToUpperInline();

	// Load in the letter scores map
	for (int i = 0; i < FMath::Min(Letters.Num(), LetterScores.Num()); i++)
	{
		if (Letters[i].Len() > 0)
			LetterScoresMap.FindOrAdd(Letters[i][0], FCString::Atoi(*LetterScores[i]));
		//UE_LOG(WordListSearchLog, Warning, TEXT("Score for letter %s : %d"), *Letters[i], FCString::Atoi(*LetterScores[i]));
	}

	for (int i = 0; i < WordsToSearch.Num(); i++)
	{
		FString word = WordsToSearch[i];
		WordLengths.Add(word.Len());
		WordScores.Add(CalculateScore(word));
		for (TCHAR c : word)
		{
			WordsDictonary.FindOrAdd(c);
			WordsDictonary[c].Add(i);
		}
	}

	UE_LOG(WordListSearchLog, Warning, TEXT("WordListSearch: Init"));
}

bool UWordListSearch::CheckIfWordExists(FString Word, int& score)
{
	int index = -1;
	if (WordsToSearch.Find(Word, index))
	{
		score = WordScores[index];
		return true;
	}
	return false;
}

void UWordListSearch::FindWordsWithLetters(FString Letters, bool ReturnAllWords, int NumOfWordsToReturn, bool RandWordsOrderWithSameScore, TArray<FString>& WordsFound, TArray<int>& Scores)
{
	Letters.ToUpperInline();

	Scores.Reset(100);
	WordsFound.Reset(100);

	// Count number of each letter
	TMap<TCHAR, uint8> ProvidedLetterCounts = CountLetters(Letters);

	// Get an array of letters without duplication
	TArray<TCHAR> NoDuplicateLetters;
	ProvidedLetterCounts.GetKeys(NoDuplicateLetters);

	// Get words containing part or all of the provided letters
	TSet<uint32> WordsFoundIndicesSet;
	for (TCHAR c : NoDuplicateLetters)
	{
		if (WordsDictonary.Find(c))
			WordsFoundIndicesSet.Append(WordsDictonary[c]);
	}


	// If we only have wild cards as input then get all words
	bool OnlyWildcardsProvided = false;
	if (NoDuplicateLetters.Num() == 1 && Letters[0] == '?')
	{
		OnlyWildcardsProvided = true;
		for (int i = 0; i < WordsToSearch.Num(); i++)
			WordsFoundIndicesSet.Add(i);
	}

	TArray<uint32> WordsFoundIndicesArr = WordsFoundIndicesSet.Array();

	// Find number of wildcards (?) in privided letters
	int NumWildCards = 0;
	if (ProvidedLetterCounts.Find('?'))
		NumWildCards = ProvidedLetterCounts['?'];

	// Trim words that do not satisfy 
	TArray<uint32> SelectedWordIndices;
	SelectedWordIndices.Empty(WordsFoundIndicesArr.Num());
	for (int i = 0; i < WordsFoundIndicesArr.Num(); i++)
	{
		// Trim words that cross the max length
		int MaxLen = Letters.Len();
		if (WordLengths[WordsFoundIndicesArr[i]] > MaxLen)
			continue;

		bool DoesSatisfy = true;

		FString CurrentWord = WordsToSearch[WordsFoundIndicesArr[i]];
		TMap<TCHAR, uint8> CurrentWordLetterCounts = CountLetters(CurrentWord);

		TArray<TCHAR> CurrentWordLetterCountsKeys;
		CurrentWordLetterCounts.GetKeys(CurrentWordLetterCountsKeys);

		int NumChances = NumWildCards;
		for (TCHAR c : CurrentWordLetterCountsKeys)
		{
			if (!ProvidedLetterCounts.Find(c))
				NumChances -= CurrentWordLetterCounts[c];
			else
				NumChances -= FMath::Max(CurrentWordLetterCounts[c] - ProvidedLetterCounts[c], 0);

			// if we only have wildcards as input then minimum length of a word should be = to number of wildcards
			if (OnlyWildcardsProvided)
			{
				if (CurrentWord.Len() < NumWildCards)
				{
					DoesSatisfy = false;
					break;
				}
			}
			// if we used any wildcards and the length of the word was less than NumWildCards+1
			if (NumChances != NumWildCards && CurrentWord.Len() < NumWildCards+1)
			{
				DoesSatisfy = false;
				break;
			}

			// if we ran out of wildcards
			if (NumChances < 0)
			{
				DoesSatisfy = false;
				break;
			}

		}

		if (DoesSatisfy)
		{
			SelectedWordIndices.Add(WordsFoundIndicesArr[i]);
		}
	}

	SelectedWordIndices.Sort([RandWordsOrderWithSameScore](uint32 A, uint32 B)
		{
			FString WordA = WordsToSearch[A];
			FString WordB = WordsToSearch[B];
			float SortScore = 0;
			if (!RandWordsOrderWithSameScore)
			{
				SortScore = (FPlatformString::Stricmp(*WordA, *WordB)) / 50.0;
				SortScore = FMath::Clamp<float>(SortScore, -0.5, 0.5);
			}
			else
			{ 
				SortScore = FMath::FRand() - 0.5;
			}

			int WordScore = WordScores[A] - WordScores[B];
			float TotalScore = - SortScore + WordScore;
			//if (SortScore > 0.5 || SortScore < -0.5)
			//	UE_LOG(WordListSearchLog, Warning, TEXT("%s %s = %f"), *WordA, *WordB, SortScore);

			return TotalScore > 0;
		});

	if (!ReturnAllWords)
		SelectedWordIndices.SetNum(FMath::Min(NumOfWordsToReturn, SelectedWordIndices.Num()));

	for (int i = 0; i < SelectedWordIndices.Num(); i++)
	{
		WordsFound.Add(WordsToSearch[SelectedWordIndices[i]]);
		Scores.Add(WordScores[SelectedWordIndices[i]]);
	}
}
