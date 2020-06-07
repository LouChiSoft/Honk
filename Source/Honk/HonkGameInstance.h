// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "HonkGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class HONK_API UHonkGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetNumPlayers(int PlayerNum) { PlayerCount = PlayerNum; }
	UFUNCTION(BlueprintCallable)
	int GetNumPlayers() { return PlayerCount; }

private:
	int PlayerCount = 2;
};