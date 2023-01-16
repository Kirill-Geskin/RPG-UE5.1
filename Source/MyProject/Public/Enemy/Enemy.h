
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/HitInterface.h" // this include for inheritance from HitInterface class 
#include "Enemy.generated.h"

class UAnimMontage;
class UAttributeComponent;
class UHealtBarComponent;

UCLASS()
class MYPROJECT_API AEnemy : public ACharacter, public IHitInterface
{
	GENERATED_BODY()

public:
	AEnemy();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void GetHit_Implementation(const FVector& ImpactPoint) override;
	void DirectionalHitReact(const FVector& ImpactPoint);

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

protected:
	virtual void BeginPlay() override;


private:

	UPROPERTY(VisibleAnywhere)
	UHealtBarComponent* HealthBarWidget;

	UPROPERTY(VisibleAnywhere)
	UAttributeComponent* Attributes;

	/*
		Animation montages
	*/

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* HitReactMontage;

	UPROPERTY(EditAnywhere, Category = Sounds)
	USoundBase* HitSound; // for metasound

	UPROPERTY(EditAnywhere, Category = VisualEffects)
	UParticleSystem* HitParticles; // for cascade partical sys

	/*
		Play montage functions
	*/

	void PlayingHitReactMontage(const FName &SectionName);

};
