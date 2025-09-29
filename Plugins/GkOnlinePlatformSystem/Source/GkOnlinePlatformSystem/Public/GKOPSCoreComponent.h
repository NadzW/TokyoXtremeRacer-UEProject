#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GKOPSCoreComponent.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UGKOPSCoreComponent : public UInterface {
    GENERATED_BODY()
};

class IGKOPSCoreComponent : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetAppID() const;
    
};

