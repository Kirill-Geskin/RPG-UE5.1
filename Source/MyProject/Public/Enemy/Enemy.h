
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/HitInterface.h" // this include for inheritance from HitInterface class 
#include "Enemy.generated.h"

class UAnimMontage;

UCLASS()
class MYPROJECT_API AEnemy : public ACharacter, public IHitInterface
{
	GENERATED_BODY()

public:
	AEnemy();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetHit(const FVector& ImpactPoint) override;
	void DirectionalHitReact(const FVector& ImpactPoint);
protected:
	virtual void BeginPlay() override;


private:
	/*
		Animation montages
	*/

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* HitReactMontage;

	/*
		Play montage functions
	*/

	void PlayingHitReactMontage(const FName &SectionName);

};
