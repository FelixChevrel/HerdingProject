// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrownObjectCPP.h"

// Sets default values
AThrownObjectCPP::AThrownObjectCPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mass = 100;
	destroy = false;
	wasThrown = false;
	amorced = false;
	gravityStack = 0;

	
}

// Called when the game starts or when spawned
void AThrownObjectCPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AThrownObjectCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (wasThrown) {

		CurrentLocation = this->GetActorLocation();

		CurrentLocation += vect * DeltaTime;

		gravityStack += 9.8 * DeltaTime;

		vect.Z -= gravityStack;

		SetActorLocation(CurrentLocation);

	}

}

void AThrownObjectCPP::throwObject(float power, FVector dir)
{
	vect = dir * power;

	wasThrown = true;
}


