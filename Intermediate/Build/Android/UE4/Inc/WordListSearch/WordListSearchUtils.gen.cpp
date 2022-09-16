// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WordListSearch/Private/WordListSearchUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWordListSearchUtils() {}
// Cross Module References
	WORDLISTSEARCH_API UClass* Z_Construct_UClass_UWordListSearch_NoRegister();
	WORDLISTSEARCH_API UClass* Z_Construct_UClass_UWordListSearch();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WordListSearch();
// End Cross Module References
	DEFINE_FUNCTION(UWordListSearch::execFindWordsWithLetters)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Letters);
		P_GET_UBOOL(Z_Param_ReturnAllWords);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumOfWordsToReturn);
		P_GET_UBOOL(Z_Param_RandWordsOrderWithSameScore);
		P_GET_TARRAY_REF(FString,Z_Param_Out_WordsFound);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Scores);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWordListSearch::FindWordsWithLetters(Z_Param_Letters,Z_Param_ReturnAllWords,Z_Param_NumOfWordsToReturn,Z_Param_RandWordsOrderWithSameScore,Z_Param_Out_WordsFound,Z_Param_Out_Scores);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWordListSearch::execCheckIfWordExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Word);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_score);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWordListSearch::CheckIfWordExists(Z_Param_Word,Z_Param_Out_score);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWordListSearch::execInitWordDictionary)
	{
		P_GET_TARRAY(FString,Z_Param_Words);
		P_GET_TARRAY(FString,Z_Param_Letters);
		P_GET_TARRAY(FString,Z_Param_LetterScores);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWordListSearch::InitWordDictionary(Z_Param_Words,Z_Param_Letters,Z_Param_LetterScores);
		P_NATIVE_END;
	}
	void UWordListSearch::StaticRegisterNativesUWordListSearch()
	{
		UClass* Class = UWordListSearch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckIfWordExists", &UWordListSearch::execCheckIfWordExists },
			{ "FindWordsWithLetters", &UWordListSearch::execFindWordsWithLetters },
			{ "InitWordDictionary", &UWordListSearch::execInitWordDictionary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics
	{
		struct WordListSearch_eventCheckIfWordExists_Parms
		{
			FString Word;
			int32 score;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Word;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_score;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::NewProp_Word = { "Word", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordListSearch_eventCheckIfWordExists_Parms, Word), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordListSearch_eventCheckIfWordExists_Parms, score), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WordListSearch_eventCheckIfWordExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WordListSearch_eventCheckIfWordExists_Parms), &Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::NewProp_Word,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "WordListSearch" },
		{ "ModuleRelativePath", "Private/WordListSearchUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWordListSearch, nullptr, "CheckIfWordExists", nullptr, nullptr, sizeof(WordListSearch_eventCheckIfWordExists_Parms), Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWordListSearch_CheckIfWordExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWordListSearch_CheckIfWordExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics
	{
		struct WordListSearch_eventFindWordsWithLetters_Parms
		{
			FString Letters;
			bool ReturnAllWords;
			int32 NumOfWordsToReturn;
			bool RandWordsOrderWithSameScore;
			TArray<FString> WordsFound;
			TArray<int32> Scores;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Letters;
		static void NewProp_ReturnAllWords_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnAllWords;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumOfWordsToReturn;
		static void NewProp_RandWordsOrderWithSameScore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RandWordsOrderWithSameScore;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WordsFound_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WordsFound;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Scores_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Scores;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_Letters = { "Letters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordListSearch_eventFindWordsWithLetters_Parms, Letters), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_ReturnAllWords_SetBit(void* Obj)
	{
		((WordListSearch_eventFindWordsWithLetters_Parms*)Obj)->ReturnAllWords = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_ReturnAllWords = { "ReturnAllWords", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WordListSearch_eventFindWordsWithLetters_Parms), &Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_ReturnAllWords_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_NumOfWordsToReturn = { "NumOfWordsToReturn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordListSearch_eventFindWordsWithLetters_Parms, NumOfWordsToReturn), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_RandWordsOrderWithSameScore_SetBit(void* Obj)
	{
		((WordListSearch_eventFindWordsWithLetters_Parms*)Obj)->RandWordsOrderWithSameScore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_RandWordsOrderWithSameScore = { "RandWordsOrderWithSameScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WordListSearch_eventFindWordsWithLetters_Parms), &Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_RandWordsOrderWithSameScore_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_WordsFound_Inner = { "WordsFound", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_WordsFound = { "WordsFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordListSearch_eventFindWordsWithLetters_Parms, WordsFound), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_Scores_Inner = { "Scores", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_Scores = { "Scores", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordListSearch_eventFindWordsWithLetters_Parms, Scores), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_Letters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_ReturnAllWords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_NumOfWordsToReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_RandWordsOrderWithSameScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_WordsFound_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_WordsFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_Scores_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::NewProp_Scores,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::Function_MetaDataParams[] = {
		{ "Category", "WordListSearch" },
		{ "Comment", "// Returns words containing the letters but could have other letters too\n" },
		{ "ModuleRelativePath", "Private/WordListSearchUtils.h" },
		{ "ToolTip", "Returns words containing the letters but could have other letters too" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWordListSearch, nullptr, "FindWordsWithLetters", nullptr, nullptr, sizeof(WordListSearch_eventFindWordsWithLetters_Parms), Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics
	{
		struct WordListSearch_eventInitWordDictionary_Parms
		{
			TArray<FString> Words;
			TArray<FString> Letters;
			TArray<FString> LetterScores;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Words_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Words;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Letters_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Letters;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LetterScores_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LetterScores;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::NewProp_Words_Inner = { "Words", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::NewProp_Words = { "Words", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordListSearch_eventInitWordDictionary_Parms, Words), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::NewProp_Letters_Inner = { "Letters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::NewProp_Letters = { "Letters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordListSearch_eventInitWordDictionary_Parms, Letters), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::NewProp_LetterScores_Inner = { "LetterScores", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::NewProp_LetterScores = { "LetterScores", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordListSearch_eventInitWordDictionary_Parms, LetterScores), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::NewProp_Words_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::NewProp_Words,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::NewProp_Letters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::NewProp_Letters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::NewProp_LetterScores_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::NewProp_LetterScores,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::Function_MetaDataParams[] = {
		{ "Category", "WordListSearch" },
		{ "ModuleRelativePath", "Private/WordListSearchUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWordListSearch, nullptr, "InitWordDictionary", nullptr, nullptr, sizeof(WordListSearch_eventInitWordDictionary_Parms), Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWordListSearch_InitWordDictionary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWordListSearch_InitWordDictionary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWordListSearch_NoRegister()
	{
		return UWordListSearch::StaticClass();
	}
	struct Z_Construct_UClass_UWordListSearch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWordListSearch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WordListSearch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWordListSearch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWordListSearch_CheckIfWordExists, "CheckIfWordExists" }, // 4074886558
		{ &Z_Construct_UFunction_UWordListSearch_FindWordsWithLetters, "FindWordsWithLetters" }, // 1499319940
		{ &Z_Construct_UFunction_UWordListSearch_InitWordDictionary, "InitWordDictionary" }, // 1776252484
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWordListSearch_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WordListSearchUtils.h" },
		{ "ModuleRelativePath", "Private/WordListSearchUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWordListSearch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWordListSearch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWordListSearch_Statics::ClassParams = {
		&UWordListSearch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWordListSearch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWordListSearch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWordListSearch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWordListSearch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWordListSearch, 2560019039);
	template<> WORDLISTSEARCH_API UClass* StaticClass<UWordListSearch>()
	{
		return UWordListSearch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWordListSearch(Z_Construct_UClass_UWordListSearch, &UWordListSearch::StaticClass, TEXT("/Script/WordListSearch"), TEXT("UWordListSearch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWordListSearch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
