// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class QUICKSTARTPROG_API AFloatingActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFloatingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
	float RunningTime;
	UPROPERTY(EditAnywhere)
	float DeltaVelocity = 1.0;
	UPROPERTY(EditAnywhere)
	float DeltaX = 10.0;
	UPROPERTY(EditAnywhere)
	float DeltaY = 10.0;
	UPROPERTY(EditAnywhere)
	float DeltaZ = 10.0;
};
