// Copyright 2022 Convai Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WordListSearchUtils.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(WordListSearchLog, Log, All);

/**
 * 
 */
UCLASS()
class UWordListSearch : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "WordListSearch")
	static void InitWordDictionary(TArray<FString> Words, TArray<FString> Letters, TArray<FString> LetterScores);

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "WordListSearch")
	static bool CheckIfWordExists(FString Word, int& score);


	// Returns words containing the letters but could have other letters too
	UFUNCTION(BlueprintCallable, Category = "WordListSearch")
	static void FindWordsWithLetters(FString Letters, bool ReturnAllWords, int NumOfWordsToReturn, bool RandWordsOrderWithSameScore, TArray<FString>& WordsFound, TArray<int>& Scores);

	/* Contains every letter and the indices of the words that contain that letter*/
	static TMap<TCHAR, TSet<uint32>> WordsDictonary;

	/* Contains the words in the dictionary */
	static TArray<FString> WordsToSearch;


	static TArray<uint16> WordLengths;

	static TMap<TCHAR, uint32> LetterScoresMap;

	static TArray<uint16> WordScores;
};
