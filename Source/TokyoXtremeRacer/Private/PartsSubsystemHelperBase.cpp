#include "PartsSubsystemHelperBase.h"

UPartsSubsystemHelperBase::UPartsSubsystemHelperBase() {
}

void UPartsSubsystemHelperBase::SetWheelObjectParts2_Implementation(UObject* Object, int32 car_id, const FString& wheel_name, const FString& wheel_maker_name, UObject* parts_object, bool is_front) {
}

void UPartsSubsystemHelperBase::SetWheelObjectParts_Implementation(UObject* Object, int32 car_id, EWheelType wheel_type, UObject* parts_object, bool is_front) {
}

void UPartsSubsystemHelperBase::SetRotorObjectParts2_Implementation(UObject* Object, int32 car_id, const FString& rotor_name, const FString& rotor_maker_name, UObject* parts_object, bool is_left, bool is_front) {
}

void UPartsSubsystemHelperBase::SetFullCustomObjectParts_Implementation(UObject* Object, int32 car_id, FSCustomCarPartsStruct car_parts, const TArray<FSPartsObjectInfo>& parts_obejct) {
}

void UPartsSubsystemHelperBase::SetCarObjectParts_Implementation(UObject* Object, int32 car_id, ECustomCarPartsType parts_type, FSPartsObjectInfo parts_object) {
}

void UPartsSubsystemHelperBase::SetCaliperObjectParts2_Implementation(UObject* Object, int32 car_id, const FString& caliper_name, const FString& caliper_maker_name, UObject* parts_object, bool is_left, bool is_front) {
}

void UPartsSubsystemHelperBase::SetCaliperObjectParts_Implementation(UObject* Object, int32 car_id, EBrakeCaliperType caliper_type, UObject* parts_object, bool is_left, bool is_front) {
}

float UPartsSubsystemHelperBase::GetTireInch_Implementation(UObject* Object, bool is_front) {
    return 0.0f;
}

ECustomCarPartsType UPartsSubsystemHelperBase::GetPartsType_Implementation(int32 car_id, ECustomCarPartsKind car_kind) {
    return ECustomCarPartsType::Normal;
}

FSCustomCarPartsStruct UPartsSubsystemHelperBase::GetCarPartsStruct_Implementation(int32 car_id) {
    return FSCustomCarPartsStruct{};
}


