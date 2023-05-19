// Copyright Epic Games, Inc. All Rights Reserved.


#include "HowToMakeCoffeeGameModeBase.h"

AHowToMakeCoffeeGameModeBase::AHowToMakeCoffeeGameModeBase() : Super()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/Characters/Gustaff/BP_Gustaff"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
}