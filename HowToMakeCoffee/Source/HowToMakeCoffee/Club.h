// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#pragma region includes
#pragma region UE5
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#pragma endregion

#pragma region project
#include "Club.generated.h"
#pragma endregion
#pragma endregion

UCLASS()
class HOWTOMAKECOFFEE_API AClub : public AActor
{
	GENERATED_BODY()

public:
	AClub();

#pragma region variables
#pragma region components
private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Club", meta = (AllowPrivateAccess = "true"))
		TObjectPtr<class USceneComponent> Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Club", meta = (AllowPrivateAccess = "true"))
		TObjectPtr<class UStaticMeshComponent> Club;
#pragma endregion

#pragma region properties
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Club|Properties", meta = (AllowPrivateAccess = "true", ClampMin = 0.5, ClampMax = 2))
		float ClubScale{ 1.f };
#pragma endregion
#pragma endregion
};
