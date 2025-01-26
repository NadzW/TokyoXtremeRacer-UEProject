#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EBrakeCaliperType.h"
#include "ECustomCarPartsKind.h"
#include "ECustomCarPartsType.h"
#include "EWheelType.h"
#include "SCustomCarPartsStruct.h"
#include "SPartsObjectInfo.h"
#include "PartsSubsystemHelperBase.generated.h"

UCLASS(Abstract, Blueprintable)
class TOKYOXTREMERACER_API UPartsSubsystemHelperBase : public UObject {
    GENERATED_BODY()
public:
    UPartsSubsystemHelperBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWheelObjectParts2(UObject* Object, int32 car_id, const FString& wheel_name, const FString& wheel_maker_name, UObject* parts_object, bool is_front);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWheelObjectParts(UObject* Object, int32 car_id, EWheelType wheel_type, UObject* parts_object, bool is_front);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRotorObjectParts2(UObject* Object, int32 car_id, const FString& rotor_name, const FString& rotor_maker_name, UObject* parts_object, bool is_left, bool is_front);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFullCustomObjectParts(UObject* Object, int32 car_id, FSCustomCarPartsStruct car_parts, const TArray<FSPartsObjectInfo>& parts_obejct);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCarObjectParts(UObject* Object, int32 car_id, ECustomCarPartsType parts_type, FSPartsObjectInfo parts_object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCaliperObjectParts2(UObject* Object, int32 car_id, const FString& caliper_name, const FString& caliper_maker_name, UObject* parts_object, bool is_left, bool is_front);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCaliperObjectParts(UObject* Object, int32 car_id, EBrakeCaliperType caliper_type, UObject* parts_object, bool is_left, bool is_front);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTireInch(UObject* Object, bool is_front);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECustomCarPartsType GetPartsType(int32 car_id, ECustomCarPartsKind car_kind);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSCustomCarPartsStruct GetCarPartsStruct(int32 car_id);
    
};

