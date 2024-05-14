// Copyright Epic Games, Inc. All Rights Reserved.

#include "FacadeShip.h"
#include "Facade_PatternGameModeBase.h"

AFacade_PatternGameModeBase::AFacade_PatternGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFacade_PatternGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	Facade = GetWorld()->SpawnActor<AFacadeShip>(AFacadeShip::StaticClass());
	Facade->TareasDia();
	Facade->TareasMedioDia();
	Facade->TareasNoche();
}

void AFacade_PatternGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
