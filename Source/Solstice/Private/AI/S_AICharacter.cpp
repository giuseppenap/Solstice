// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/S_AICharacter.h"

// Sets default values
AS_AICharacter::AS_AICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AS_AICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AS_AICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AS_AICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

