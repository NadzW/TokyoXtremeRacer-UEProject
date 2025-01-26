#pragma once
#include "CoreMinimal.h"
#include "EInputSignalType.h"
#include "ControllerLayoutKey.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FControllerLayoutKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputSignalType SignalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    FControllerLayoutKey();
};
FORCEINLINE uint32 GetTypeHash(const FControllerLayoutKey) { return 0; }

