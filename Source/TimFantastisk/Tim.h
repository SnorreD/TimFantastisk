// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "Tim.generated.h"

UCLASS()
class TIMFANTASTISK_API ATim : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATim();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveX(float AxisValue);
	void MoveY(float AxisValue);
	void Jump();
	
	UPROPERTY(EditAnywhere)
		USceneComponent* OurVisibleComponent;
};