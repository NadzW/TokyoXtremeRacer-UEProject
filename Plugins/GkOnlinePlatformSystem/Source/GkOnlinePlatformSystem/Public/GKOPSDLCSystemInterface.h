#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GKOPSDLCSystemInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class GKONLINEPLATFORMSYSTEM_API UGKOPSDLCSystemInterface : public UInterface {
    GENERATED_BODY()
};

class GKONLINEPLATFORMSYSTEM_API IGKOPSDLCSystemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool MountDLCPath(const FString& UEMountPoint, const FString& DLCAppID, const FString& DLCPluginName) PURE_VIRTUAL(MountDLCPath, return false;);
    
};

