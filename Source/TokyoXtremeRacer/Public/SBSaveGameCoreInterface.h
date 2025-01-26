#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SSBVersion.h"
#include "SBSaveGameCoreInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class USBSaveGameCoreInterface : public UInterface {
    GENERATED_BODY()
};

class ISBSaveGameCoreInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSBVersion(const FSSBVersion in_version);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSSBVersion GetSBVersion();
    
};

