#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GkPlatform.generated.h"

UCLASS(Blueprintable)
class UGkPlatform : public UObject {
    GENERATED_BODY()
public:
    UGkPlatform();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamDeck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTempDirectoryPath();
    
};

