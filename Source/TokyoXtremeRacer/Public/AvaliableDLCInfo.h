#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SDLCInfo.h"
#include "EDLCAvaliableStatus.h"
#include "EDLCUseCheckResult.h"
#include "AvaliableDLCInfo.generated.h"

class UAvaliableDLCInfo;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UAvaliableDLCInfo : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EDLCAvaliableStatus> DLCStatusMap;
    
public:
    UAvaliableDLCInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void OutputDLCStatusMapForDLCAppInfo(TMap<FName, EDLCAvaliableStatus>& RetDLCStatusMap) const;
    
    UFUNCTION(BlueprintCallable)
    static UAvaliableDLCInfo* ConstructAvaliableDLCInfoFromDLCAppInfo(const TMap<FName, EDLCAvaliableStatus> tDLCStatusMap);
    
    UFUNCTION(BlueprintCallable)
    static UAvaliableDLCInfo* ConstructAvaliableDLCInfo(const TArray<FSDLCInfo>& DLCList);
    
    UFUNCTION(BlueprintCallable)
    EDLCUseCheckResult CheckCurrentDLCInfoIsEnough(const UAvaliableDLCInfo* PrevDLCDataInfo);
    
};

