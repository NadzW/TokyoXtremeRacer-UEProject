#pragma once
#include "CoreMinimal.h"
#include "ControllerModel.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FControllerModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VendorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProductId;
    
    FControllerModel();
};
FORCEINLINE uint32 GetTypeHash(const FControllerModel) { return 0; }

