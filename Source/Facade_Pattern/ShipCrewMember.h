// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShipCrewMember.generated.h"

UCLASS()
class FACADE_PATTERN_API AShipCrewMember : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShipCrewMember();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void MantenimientoDia();
	void MantenimientoEmergencia();
	void ExploracionPeligrosa();
	void ExploracionPlanetas();
	void LuchaEspacial();

	void TareasAprobadas(const TArray<FString>& _tareas);

	virtual void Obligacion() PURE_VIRTUAL(AShipCrewMember::Obligacion;);
	virtual FString TituloTripulacion() PURE_VIRTUAL(AShipCrewMember::TituloTripulacion, return "";);

private:
	void ValidarTareas(const FString& _tarea);

};
