// Fill out your copyright notice in the Description page of Project Settings.


#pragma region includes
#pragma region project
#include "Club.h"
#pragma endregion

#pragma region UE5
#include "Components/StaticMeshComponent.h"
#pragma endregion
#pragma endregion

AClub::AClub()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	Club = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Club"));
	Club->SetupAttachment(Root);
	Club->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	Club->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));
	Club->SetRelativeScale3D(FVector(ClubScale, ClubScale, ClubScale));
}