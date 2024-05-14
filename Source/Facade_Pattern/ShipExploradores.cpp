// Fill out your copyright notice in the Description page of Project Settings.


#include "ShipExploradores.h"

// Sets default values
AShipExploradores::AShipExploradores()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShipExploradores::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShipExploradores::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShipExploradores::Obligacion()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Realizar exploraciones"), *TituloTripulacion()));
}

FString AShipExploradores::TituloTripulacion()
{
	return "Oficial de exploracion";
}

