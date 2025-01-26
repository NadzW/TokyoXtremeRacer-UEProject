#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CompletedCustomWheelBothLoadDelegate.h"
#include "ErrorCustomWheelBothLoadDelegate.h"
#include "LoadSoftObjectAsyncActionBase.h"
#include "CustomPartsWheelBothLoadAsyncActionBase.generated.h"

class UCustomPartsWheelBothLoadAsyncActionBase;
class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UCustomPartsWheelBothLoadAsyncActionBase : public ULoadSoftObjectAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedCustomWheelBothLoad Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FErrorCustomWheelBothLoad Error;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* car_object_;
    
public:
    UCustomPartsWheelBothLoadAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCustomPartsWheelBothLoadAsyncActionBase* CustomWheelBothLoadAndSetCar2(UObject* WorldContextObject, UObject* car_object, int32 car_id, const FString& front_wheel_name, const FString& front_wheel_maker_name, const FString& rear_wheel_name, const FString& rear_wheel_maker_name, FSoftObjectPath front_material, FSoftObjectPath rear_material, bool is_pit_wheel);
    
};

