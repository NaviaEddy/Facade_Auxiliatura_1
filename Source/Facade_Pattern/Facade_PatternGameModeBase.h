// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Facade_PatternGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_PATTERN_API AFacade_PatternGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFacade_PatternGameModeBase();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere, Category="Game mode")
	class AFacadeShip* Facade;
	
};
