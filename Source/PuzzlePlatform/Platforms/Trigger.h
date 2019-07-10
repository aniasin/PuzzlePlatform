// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Trigger.generated.h"

class UBoxComponent;

UCLASS()
class PUZZLEPLATFORM_API ATrigger : public AActor
{
	GENERATED_BODY()
	
	// Sets default values for this actor's properties
	ATrigger();
	UPROPERTY(VisibleAnywhere, Category = "SetUp")
	UBoxComponent* TriggerBox;
	UPROPERTY(VisibleAnywhere, Category = "SetUp")
	UStaticMeshComponent* PressurePlate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
