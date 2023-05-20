// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#pragma region includes
#pragma region UE5
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/InputComponent.h"
#include "InputActionValue.h"
#pragma endregion

#pragma region project
#include "Gustaff.generated.h"
#pragma endregion
#pragma endregion

UCLASS()
class HOWTOMAKECOFFEE_API AGustaff : public APawn
{
	GENERATED_BODY()

#pragma region functions
public:
	AGustaff();

protected:
	virtual void BeginPlay() override;

#pragma region input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void Move(const FInputActionValue& Value);
#pragma endregion
#pragma endregion

#pragma region variables
#pragma region components
private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
		TObjectPtr<class USceneComponent> Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
		TObjectPtr<class UStaticMeshComponent> Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
		TObjectPtr< class USpringArmComponent> SpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
		TObjectPtr<class UCameraComponent> Camera;
#pragma endregion

#pragma region input
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
		TObjectPtr<class UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
		TObjectPtr<class UInputAction> MoveAction;
#pragma endregion
#pragma endregion
};
