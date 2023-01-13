// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Pickup_Treasure.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API APickup_Treasure : public AItem
{
	GENERATED_BODY()
protected:

	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
private:

	UPROPERTY(EditAnywhere, Category = Sounds)
	USoundBase* PickupSound; // for metasound

	UPROPERTY(EditAnywhere, Category = "Treasure Properties")
	int32 Gold;

};
