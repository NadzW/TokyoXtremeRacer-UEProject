#include "MySpringArmComponent.h"

UMySpringArmComponent::UMySpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitInterpSpeed = 0.00f;
    this->HitReturnInterpTime = 0.00f;
}


