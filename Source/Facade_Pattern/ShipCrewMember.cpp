// Fill out your copyright notice in the Description page of Project Settings.


#include "ShipCrewMember.h"

// Sets default values
AShipCrewMember::AShipCrewMember()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShipCrewMember::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShipCrewMember::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShipCrewMember::MantenimientoDia()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, 
		FString::Printf(TEXT("Inspeccion de la nave en general"), *TituloTripulacion()));
}

void AShipCrewMember::MantenimientoEmergencia()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, 
		FString::Printf(TEXT("Inspeccion de la nave por fallas"), *TituloTripulacion()));
}

void AShipCrewMember::ExploracionPeligrosa()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, 
		FString::Printf(TEXT("Exploracion de recursos peligrosos"), *TituloTripulacion()));
}

void AShipCrewMember::ExploracionPlanetas()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, 
		FString::Printf(TEXT("Exploracion de planeta nuevo"), *TituloTripulacion()));
}

void AShipCrewMember::LuchaEspacial()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, 
		FString::Printf(TEXT("Combate espacial"), *TituloTripulacion()));
}

void AShipCrewMember::TareasAprobadas(const TArray<FString>& _tareas)
{
	for(FString tarea : _tareas)
	{
		ValidarTareas(tarea);
	}
}

void AShipCrewMember::ValidarTareas(const FString& _tarea)
{
	if (_tarea.Equals("MantenimientoDia")) {
		MantenimientoDia();
	}
	else if (_tarea.Equals("MantenimientoEmergencia")) {
		MantenimientoEmergencia();
	}
	else if (_tarea.Equals("ExploracionPeligrosa")) {
		ExploracionPeligrosa();
	}
	else if (_tarea.Equals("ExploracionPlanetas")) {
		ExploracionPlanetas();
	}
	else if (_tarea.Equals("LuchaEspacial")) {
		LuchaEspacial();
	}
	else if (_tarea.Equals("Obligacion")) {
		Obligacion();
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, 
		FString::Printf(TEXT("Tarea no valida")));
	}
}
