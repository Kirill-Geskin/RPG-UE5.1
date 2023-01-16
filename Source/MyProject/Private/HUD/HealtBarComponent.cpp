// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/HealtBarComponent.h"
#include "HUD/HealtBar.h"
#include "Components/ProgressBar.h"


void UHealtBarComponent::SetHealthPercent(float Percent)
{
	if (HealthBarWidget == nullptr)
	{
		HealthBarWidget = Cast<UHealtBar>(GetUserWidgetObject());
	}

	if (HealthBarWidget && HealthBarWidget->HealthBar)
	{
		HealthBarWidget->HealthBar->SetPercent(Percent);
	}
}