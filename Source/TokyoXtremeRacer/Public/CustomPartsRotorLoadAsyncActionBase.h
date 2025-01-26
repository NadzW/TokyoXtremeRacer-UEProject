#pragma once
#include "CoreMinimal.h"
#include "CompletedCustomRotorLoadDelegate.h"
#include "ErrorCustomRotorLoadDelegate.h"
#include "LoadSoftObjectAsyncActionBase.h"
#include "CustomPartsRotorLoadAsyncActionBase.generated.h"

class UCustomPartsRotorLoadAsyncActionBase;
class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UCustomPartsRotorLoadAsyncActionBase : public ULoadSoftObjectAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedCustomRotorLoad Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FErrorCustomRotorLoad Error;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* car_object_;
    
public:
    UCustomPartsRotorLoadAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCustomPartsRotorLoadAsyncActionBase* CustomRotorLoadAndSetCar2(UObject* WorldContextObject, UObject* car_object, int32 car_id, const FString& car_name, const FString& rotor_name, const FString& rotor_maker_name, bool is_front, bool i_pit, bool is_both);
    
};

