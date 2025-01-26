#pragma once
#include "CoreMinimal.h"
#include "CompletedCustomLoadDelegate.h"
#include "ECarType.h"
#include "ECustomCarPartsKind.h"
#include "ECustomCarPartsType.h"
#include "ErrorCustomLoadDelegate.h"
#include "LoadSoftObjectAsyncActionBase.h"
#include "CustomPartsLoadAsyncActionBase.generated.h"

class UCustomPartsLoadAsyncActionBase;
class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UCustomPartsLoadAsyncActionBase : public ULoadSoftObjectAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedCustomLoad Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FErrorCustomLoad Error;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* car_object_;
    
public:
    UCustomPartsLoadAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCustomPartsLoadAsyncActionBase* CustomPartsLoadAndSetCar2(UObject* WorldContextObject, UObject* car_object, int32 car_id, const FString& car_name, const FString& car_maker_name, ECustomCarPartsKind parts_kind, ECustomCarPartsType parts_type, bool is_change_muffler);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCustomPartsLoadAsyncActionBase* CustomPartsLoadAndSetCar(UObject* WorldContextObject, UObject* car_object, int32 car_id, ECarType car_type, ECustomCarPartsKind parts_kind, ECustomCarPartsType parts_type);
    
};

