// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "HealtBarComponent.generated.h"

class UHealtBar;

UCLASS()
class MYPROJECT_API UHealtBarComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
	void SetHealthPercent(float Percent);
private:
	UPROPERTY()
	UHealtBar* HealthBarWidget;

	
};
