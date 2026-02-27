#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "InputModifierMultiplyAdd.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class TOKYOXTREMERACER_API UInputModifierMultiplyAdd : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delta;
    
    UInputModifierMultiplyAdd();

};

