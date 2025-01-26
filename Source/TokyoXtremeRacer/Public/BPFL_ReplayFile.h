#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReplayDetailInfo.h"
#include "BPFL_ReplayFile.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_ReplayFile : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_ReplayFile();

private:
    UFUNCTION(BlueprintCallable)
    static bool IsFullReplayNumber(const TArray<FReplayDetailInfo>& ReplayList, bool& IsFullLocked);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckDeleteReplayFile(UPARAM(Ref) TArray<FReplayDetailInfo>& ReplayList);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckDeleteOldOneReplayFile(UPARAM(Ref) TArray<FReplayDetailInfo>& ReplayList, const bool is_delete_file);
    
};

