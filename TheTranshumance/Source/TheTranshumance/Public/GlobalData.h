// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GlobalData.generated.h"

/**
 * 
 */
UCLASS()
class THETRANSHUMANCE_API UGlobalData : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
};

UENUM(BlueprintType)
enum petOrder
{
	follow UMETA(ToolTip = "follow the player"),
	wait UMETA(ToolTip = "Stay at a spot"),
	interact UMETA(ToolTip = "Interact with an object or attack an enemy")
};
