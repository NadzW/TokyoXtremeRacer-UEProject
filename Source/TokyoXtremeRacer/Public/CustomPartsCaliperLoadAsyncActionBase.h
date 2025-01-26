#pragma once
#include "CoreMinimal.h"
#include "CompletedCustomCaliperLoadDelegate.h"
#include "EBrakeCaliperType.h"
#include "ECarType.h"
#include "ErrorCustomCaliperLoadDelegate.h"
#include "LoadSoftObjectAsyncActionBase.h"
#include "CustomPartsCaliperLoadAsyncActionBase.generated.h"

class UCustomPartsCaliperLoadAsyncActionBase;
class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UCustomPartsCaliperLoadAsyncActionBase : public ULoadSoftObjectAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedCustomCaliperLoad Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FErrorCustomCaliperLoad Error;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* car_object_;
    
public:
    UCustomPartsCaliperLoadAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCustomPartsCaliperLoadAsyncActionBase* CustomCaliperLoadAndSetCar2(UObject* WorldContextObject, UObject* car_object, int32 car_id, const FString& car_name, const FString& caliper_name, const FString& caliper_maker_name, bool is_front, bool is_both);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCustomPartsCaliperLoadAsyncActionBase* CustomCaliperLoadAndSetCar(UObject* WorldContextObject, UObject* car_object, int32 car_id, ECarType car_type, EBrakeCaliperType caliper_type, bool is_front);
    
};

