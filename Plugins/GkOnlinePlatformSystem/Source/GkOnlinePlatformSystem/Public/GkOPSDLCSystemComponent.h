#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GKOPSDLCSystemInterface.h"
#include "GkOPSDLCSystemComponent.generated.h"

UCLASS(Blueprintable)
class GKONLINEPLATFORMSYSTEM_API UGkOPSDLCSystemComponent : public UObject, public IGKOPSDLCSystemInterface {
    GENERATED_BODY()
public:
    UGkOPSDLCSystemComponent();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool MountDLCPath(const FString& UEMountPoint, const FString& DLCAppID, const FString& DLCPluginName) override PURE_VIRTUAL(MountDLCPath, return false;);
    
};

