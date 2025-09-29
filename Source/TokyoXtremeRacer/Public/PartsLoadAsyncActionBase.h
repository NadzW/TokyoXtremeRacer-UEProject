#pragma once
#include "CoreMinimal.h"
#include "CompletedFullCustomLoadDelegate.h"
#include "ECarType.h"
#include "ErrorFullCustomLoadDelegate.h"
#include "LoadSoftObjectAsyncActionBase.h"
#include "SCustomCarPartsStruct.h"
#include "PartsLoadAsyncActionBase.generated.h"

class UObject;
class UPartsLoadAsyncActionBase;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UPartsLoadAsyncActionBase : public ULoadSoftObjectAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedFullCustomLoad Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FErrorFullCustomLoad Error;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* car_object_;
    
public:
    UPartsLoadAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPartsLoadAsyncActionBase* FullCustomPartsLoadAndSetCar2(UObject* WorldContextObject, UObject* car_object, int32 car_id, const FString& car_name, const FString& maker_name, FSCustomCarPartsStruct Parts, bool is_pit_wheel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPartsLoadAsyncActionBase* FullCustomPartsLoadAndSetCar(UObject* WorldContextObject, UObject* car_object, int32 car_id, ECarType car_type, FSCustomCarPartsStruct Parts, bool is_pit_wheel);
    
};

