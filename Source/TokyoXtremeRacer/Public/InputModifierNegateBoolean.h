#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputModifiers.h"
#include "InputModifierNegateBoolean.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class TOKYOXTREMERACER_API UInputModifierNegateBoolean : public UInputModifier {
    GENERATED_BODY()
public:
    UInputModifierNegateBoolean();

};

