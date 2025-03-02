// // Copyright felocS. All rights reserved.


#include "QTAttributeComponent.h"

UQTAttributeComponent::UQTAttributeComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UQTAttributeComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UQTAttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

