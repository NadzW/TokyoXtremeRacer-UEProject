#include "TickableGameObjectSubsystem.h"
#include "Templates/SubclassOf.h"

UTickableGameObjectSubsystem::UTickableGameObjectSubsystem() {
}

void UTickableGameObjectSubsystem::RemoveElement(const FName Key) {
}

UTickableGameObjectSubsystemElement* UTickableGameObjectSubsystem::FindElement(const FName Key) {
    return NULL;
}

void UTickableGameObjectSubsystem::AddElement(const FName Key, TSubclassOf<UTickableGameObjectSubsystemElement> ElementClass) {
}


