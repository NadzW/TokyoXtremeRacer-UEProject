#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SDLCInfo.h"
#include "GKOPSOwnershipInterface.generated.h"

UINTERFACE(Blueprintable)
class GKONLINEPLATFORMSYSTEM_API UGKOPSOwnershipInterface : public UInterface {
    GENERATED_BODY()
};

class GKONLINEPLATFORMSYSTEM_API IGKOPSOwnershipInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReturnOwnedDLCList(const FString& BasegameAppID, UPARAM(Ref) TArray<FSDLCInfo>& OwnedDLCLists);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReturnDLCList(const FString& BasegameAppID, TArray<FSDLCInfo>& DLCLists);
    
};

