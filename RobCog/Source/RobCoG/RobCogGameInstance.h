// Copyright 2017, Institute for Artificial Intelligence - University of Bremen

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "RobCogGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class ROBCOG_API URobCogGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString NumberOfPeople;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString LevelName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString PlayerName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString ConfidenceRating;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool GameStarted;
	
	
};
