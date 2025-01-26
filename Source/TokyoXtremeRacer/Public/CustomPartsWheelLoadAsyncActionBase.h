#pragma once
#include "CoreMinimal.h"
#include "CompletedCustomWheelLoadDelegate.h"
#include "ECarType.h"
#include "EWheelType.h"
#include "ErrorCustomWheelLoadDelegate.h"
#include "LoadSoftObjectAsyncActionBase.h"
#include "CustomPartsWheelLoadAsyncActionBase.generated.h"

class UCustomPartsWheelLoadAsyncActionBase;
class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UCustomPartsWheelLoadAsyncActionBase : public ULoadSoftObjectAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedCustomWheelLoad Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FErrorCustomWheelLoad Error;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* car_object_;
    
public:
    UCustomPartsWheelLoadAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCustomPartsWheelLoadAsyncActionBase* CustomWheelLoadAndSetCar2(UObject* WorldContextObject, UObject* car_object, int32 car_id, const FString& wheel_name, const FString& wheel_maker_name, bool is_front, bool is_pit_wheel, bool is_both);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCustomPartsWheelLoadAsyncActionBase* CustomWheelLoadAndSetCar(UObject* WorldContextObject, UObject* car_object, int32 car_id, ECarType car_type, EWheelType wheel_type, bool is_front, bool is_pit_wheel);
    
};

