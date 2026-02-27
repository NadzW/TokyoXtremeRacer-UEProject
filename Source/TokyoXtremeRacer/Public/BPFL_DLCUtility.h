#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDLCAvaliableStatus.h"
#include "EDLCUseCheckResult.h"
#include "SUserInfo.h"
#include "BPFL_DLCUtility.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_DLCUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_DLCUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FName, EDLCAvaliableStatus> GetDLCAvaliableInfoFromUserInfo(const FSUserInfo& UserInfo);
    
    UFUNCTION(BlueprintCallable)
    static EDLCUseCheckResult CheckDLCAvaliableByUserInfo(bool& bIsCheckPassed, const FSUserInfo& UserInfo, const TMap<FName, EDLCAvaliableStatus>& NeedDLCInfo);
    
    UFUNCTION(BlueprintCallable)
    static EDLCUseCheckResult CheckDLCAvaliable(bool& bIsCheckPassed, const TMap<FName, EDLCAvaliableStatus>& CurrentDLCInfo, const TMap<FName, EDLCAvaliableStatus>& NeedDLCInfo);
    
};

