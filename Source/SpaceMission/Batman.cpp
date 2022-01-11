// Fill out your copyright notice in the Description page of Project Settings.


#include "Batman.h"

// Sets default values
ABatman::ABatman()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABatman::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABatman::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABatman::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

