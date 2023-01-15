
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HealtBar.generated.h"

class UProgressBar;

UCLASS()
class MYPROJECT_API UHealtBar : public UUserWidget
{
	GENERATED_BODY()
public:

	UPROPERTY(meta = (BindWidget)) // (meta = (BindWidget)) - for binding var. from BP with CPP class 
	UProgressBar* HealthBar;
	
};
