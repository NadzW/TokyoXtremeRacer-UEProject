#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_SteamUtility.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_SteamUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_SteamUtility();

    UFUNCTION(BlueprintCallable)
    static bool SteamInit();
    
    UFUNCTION(BlueprintCallable)
    static FString IsSteamSubscribed(bool& isWindows, bool& NewIsConnectSteam, bool& IsSubscribed, bool& IsRequestRelaunch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDlcInstalled(int32 DLCID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConnectSteam(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUserIDStr(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSteamUILanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrentGameLanguage();
    
};

