// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HonkWeaponComponent.h"
#include "MachineGun.generated.h"

/**
 * 
 */
UCLASS()
class HONK_API UMachineGun : public UHonkWeaponComponent
{
	GENERATED_BODY()
	
	private:
	void Fire(float dTime) override;

};
