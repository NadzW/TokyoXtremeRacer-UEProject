#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EInputActionSemantic.h"
#include "InputActionArray.h"
#include "InputActionSemanticAssociation.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UInputActionSemanticAssociation : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInputActionSemantic, FInputActionArray> Map;
    
    UInputActionSemanticAssociation();

};

