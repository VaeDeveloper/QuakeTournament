// // Copyright felocS. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QTAttributeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent, PrioritizeCategories = "AttributeComponent") )
class QUAKETOURNAMENT_API UQTAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UQTAttributeComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
