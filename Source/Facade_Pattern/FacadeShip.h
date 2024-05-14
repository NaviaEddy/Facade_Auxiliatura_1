// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeShip.generated.h"

UCLASS()
class FACADE_PATTERN_API AFacadeShip : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadeShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	//Lista de la tripulacion
	TArray<class AShipCrewMember*> Tripulacion;

	UPROPERTY(VisibleAnywhere, Category="Facade Ship")
	TArray<FString> Tareas;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Facade Ship")
	class AShipExploradores* Exploradores;
	UPROPERTY(VisibleAnywhere, Category = "Facade Ship")
	class AShipMantenimiento* Mantenimiento;


public:
	void TareasDia();
	void TareasMedioDia();
	void TareasNoche();

private:
	void PerformTask(TArray<class AShipCrewMember*> _tripulacion, TArray<FString> _Tareas);

};
