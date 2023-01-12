// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Pickup_Treasure.h"
#include "Characters/MainCharacter.h"
#include "Kismet/GameplayStatics.h"


void APickup_Treasure::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AMainCharacter* MainCharacter = Cast<AMainCharacter>(OtherActor);
	if (MainCharacter)
	{
		if (PickupSound)
		{
			UGameplayStatics::PlaySoundAtLocation(
				this,
				PickupSound, // metasound in UE 
				GetActorLocation()
			);
		}
		Destroy();
	}
}
