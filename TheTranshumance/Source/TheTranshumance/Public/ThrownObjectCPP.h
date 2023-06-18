// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/Vector.h"
#include "GameFramework/Actor.h"
#include "ThrownObjectCPP.generated.h"

UCLASS()
class THETRANSHUMANCE_API AThrownObjectCPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AThrownObjectCPP();
	

	FVector CurrentLocation;
	float gravityStack;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "projectileData") float mass;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "projectileData") bool destroy;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "calculationData") bool wasThrown;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "calculationData") bool amorced;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "calculationData") FVector vect;

	UFUNCTION(BlueprintCallable, Category = "projectileAction") void throwObject(float power, FVector dir);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
