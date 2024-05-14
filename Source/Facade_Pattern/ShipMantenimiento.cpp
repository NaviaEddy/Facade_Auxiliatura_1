// Fill out your copyright notice in the Description page of Project Settings.


#include "ShipMantenimiento.h"

// Sets default values
AShipMantenimiento::AShipMantenimiento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShipMantenimiento::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShipMantenimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShipMantenimiento::Obligacion()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Realizar mantenimiento"), *TituloTripulacion()));
}

FString AShipMantenimiento::TituloTripulacion()
{
	return "Oficial de mantenimiento";
}

