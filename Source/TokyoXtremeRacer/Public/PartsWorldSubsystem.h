#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBrakeCaliperType.h"
#include "ECustomCarPartsKind.h"
#include "ECustomCarPartsType.h"
#include "EWheelType.h"
#include "SCustomCarPartsStruct.h"
#include "SPartsObjectInfo.h"
#include "PartsWorldSubsystem.generated.h"

class UObject;
class UPartsSubsystemHelperBase;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UPartsWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPartsSubsystemHelperBase* parts_helper_;
    
    UPartsWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetWheelObjectParts2(UObject* Object, int32 car_id, const FString& wheel_name, const FString& wheel_maker_name, UObject* parts_object, bool is_front);
    
    UFUNCTION(BlueprintCallable)
    void SetWheelObjectParts(UObject* Object, int32 car_id, EWheelType wheel_type, UObject* parts_object, bool is_front);
    
    UFUNCTION(BlueprintCallable)
    void SetRotorObjectParts2(UObject* Object, int32 car_id, const FString& rotor_name, const FString& rotor_maker_name, UObject* parts_object, bool is_left, bool is_front);
    
    UFUNCTION(BlueprintCallable)
    void SetFullCustomObjectParts(UObject* Object, int32 car_id, FSCustomCarPartsStruct car_parts, const TArray<FSPartsObjectInfo>& parts_obejct);
    
    UFUNCTION(BlueprintCallable)
    void SetCarObjectParts(UObject* Object, int32 car_id, ECustomCarPartsType parts_type, FSPartsObjectInfo parts_object);
    
    UFUNCTION(BlueprintCallable)
    void SetCaliperObjectParts2(UObject* Object, int32 car_id, const FString& caliper_name, const FString& caliper_maker_name, UObject* parts_object, bool is_left, bool is_front);
    
    UFUNCTION(BlueprintCallable)
    void SetCaliperObjectParts(UObject* Object, int32 car_id, EBrakeCaliperType caliper_type, UObject* parts_object, bool is_left, bool is_front);
    
    UFUNCTION(BlueprintCallable)
    float GetTireInch(UObject* Object, bool is_front);
    
    UFUNCTION(BlueprintCallable)
    ECustomCarPartsType GetPartsType(int32 car_id, ECustomCarPartsKind car_kind);
    
    UFUNCTION(BlueprintCallable)
    FSCustomCarPartsStruct GetCarPartsStruct(int32 car_id);
    
};

