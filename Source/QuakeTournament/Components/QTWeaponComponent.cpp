// // Copyright felocS. All rights reserved.


#include "QTWeaponComponent.h"

UQTWeaponComponent::UQTWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UQTWeaponComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UQTWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

