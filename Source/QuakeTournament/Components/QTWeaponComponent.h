// // Copyright felocS. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QTWeaponComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent, PrioritizeCategories = "WeaponComponent") )
class QUAKETOURNAMENT_API UQTWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UQTWeaponComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
