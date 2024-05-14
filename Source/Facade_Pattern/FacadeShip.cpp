// Fill out your copyright notice in the Description page of Project Settings.

#include "ShipExploradores.h"
#include "ShipMantenimiento.h"
#include "FacadeShip.h"


// Sets default values
AFacadeShip::AFacadeShip()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeShip::BeginPlay()
{
	Super::BeginPlay();

	//Inicializamos los arrays de tripulacion y tareas
	Tripulacion = TArray<AShipCrewMember*>();
	Tareas = TArray<FString>();

	//Creamos las diferentes tripulaciones
	Exploradores = GetWorld()->SpawnActor<AShipExploradores>(AShipExploradores::StaticClass());
	Mantenimiento = GetWorld()->SpawnActor<AShipMantenimiento>(AShipMantenimiento::StaticClass());

	//Añadimos las tripulaciones al array de tripulacion
	Tripulacion.Add(Exploradores);
	Tripulacion.Add(Mantenimiento);
	
}

// Called every frame
void AFacadeShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void AFacadeShip::TareasDia()
{
	Tareas.Empty();
	Tareas.Add("MantenimientoDia");
	Tareas.Add("MantenimientoEmergencia");
	Tareas.Add("Obligacion");

	PerformTask(Tripulacion, Tareas);
}

void AFacadeShip::TareasMedioDia()
{
	Tareas.Empty();
	Tareas.Add("ExploracionPeligrosa");
	Tareas.Add("ExploracionPlanetas");
	Tareas.Add("Obligacion");

	PerformTask(Tripulacion, Tareas);
}

void AFacadeShip::TareasNoche()
{
	Tareas.Empty();
	Tareas.Add("LuchaEspacial");
	Tareas.Add("Obligacion");

	PerformTask(Tripulacion, Tareas);
}

void AFacadeShip::PerformTask(TArray<class AShipCrewMember*> _tripulacion, TArray<FString> _Tareas)
{
	for(AShipCrewMember* tripulante : _tripulacion)
	{
		tripulante->TareasAprobadas(_Tareas);
	}

}

