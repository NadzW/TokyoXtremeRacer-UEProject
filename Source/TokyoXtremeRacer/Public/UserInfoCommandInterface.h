#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EUserInfoCommand.h"
#include "UserInfoCommandInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UUserInfoCommandInterface : public UInterface {
    GENERATED_BODY()
};

class IUserInfoCommandInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecutedUserInfoCommand(EUserInfoCommand UserInfoCommandType);
    
};

