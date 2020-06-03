// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/BoxComponent.h"
#include "HonkPawn.h"

#include "HonkArmourDrop.generated.h"

UCLASS()
class HONK_API AHonkArmourDrop : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHonkArmourDrop();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* DropMesh = nullptr;
	UPROPERTY(EditAnywhere)
	USpotLightComponent* LightComponent = nullptr;
	UPROPERTY(EditAnywhere)
	UBoxComponent* Collider = nullptr;

	UPROPERTY(EditAnywhere)	
	float speed = 1;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
