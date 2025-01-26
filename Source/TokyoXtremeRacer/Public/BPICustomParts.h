#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EBrakeCaliperType.h"
#include "ECustomCarPartsKind.h"
#include "ECustomCarPartsType.h"
#include "EWheelType.h"
#include "SCustomCarPartsStruct.h"
#include "SPartsObjectInfo.h"
#include "BPICustomParts.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UBPICustomParts : public UInterface {
    GENERATED_BODY()
};

class IBPICustomParts : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWheelObjectParts2(const FString& wheel_name, const FString& wheel_maker_name, UObject* parts_object, bool is_front, bool is_both);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWheelObjectParts(EWheelType wheel_type, UObject* parts_object, bool is_front);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRotorObjectParts2(const FString& rotor_name, const FString& rotor_maker_name, UObject* parts_object, bool is_left, bool is_front);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFullCustomObjectParts(FSCustomCarPartsStruct car_parts, const TArray<FSPartsObjectInfo>& parts_obejct);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCarObjectParts(ECustomCarPartsType parts_type, FSPartsObjectInfo parts_object);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCaliperObjectParts2(const FString& caliper_name, const FString& caliper_maker_name, UObject* parts_object, bool is_left, bool is_front);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCaliperObjectParts(EBrakeCaliperType caliper_type, UObject* parts_object, bool is_left, bool is_front);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetTireInch(bool is_front);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ECustomCarPartsType GetPartsType(ECustomCarPartsKind car_kind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FSCustomCarPartsStruct GetCarPartsStruct(int32 car_id);
    
};

