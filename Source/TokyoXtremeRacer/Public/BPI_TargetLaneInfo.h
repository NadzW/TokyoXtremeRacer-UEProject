#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SLaneInfo.h"
#include "BPI_TargetLaneInfo.generated.h"

UINTERFACE(Blueprintable)
class TOKYOXTREMERACER_API UBPI_TargetLaneInfo : public UInterface {
    GENERATED_BODY()
};

class TOKYOXTREMERACER_API IBPI_TargetLaneInfo : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLaneInfo(const FSLaneInfo& NewLaneInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSLaneInfo GetLaneInfo() const;
    
};

