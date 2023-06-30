// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GlobalData.h"
#include "CPP_Pet.generated.h"

UCLASS()
class THETRANSHUMANCE_API ACPP_Pet : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_Pet();

	//define the current behavior of the animal
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PetBehavior") TEnumAsByte<petOrder> currentOrder ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PetBehavior") AActor* target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PetBehavior") bool carrying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PetBehavior") bool InOrder;


	// EventCalledWhenclose to the target
	UFUNCTION(BlueprintImplementableEvent, Category = "PetBehavior", BlueprintCallable)
		void takeAction();

	// Event Call when getting close to the player with an object
	UFUNCTION(BlueprintImplementableEvent, Category = "PetBehavior", BlueprintCallable)
		void drop();

	UFUNCTION(BlueprintImplementableEvent, Category = "PetBehavior", BlueprintCallable)
		void CancelOrder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
