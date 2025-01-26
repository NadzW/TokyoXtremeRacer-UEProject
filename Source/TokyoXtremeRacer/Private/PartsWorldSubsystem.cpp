#include "PartsWorldSubsystem.h"

UPartsWorldSubsystem::UPartsWorldSubsystem() {
    this->parts_helper_ = NULL;
}

void UPartsWorldSubsystem::SetWheelObjectParts2(UObject* Object, int32 car_id, const FString& wheel_name, const FString& wheel_maker_name, UObject* parts_object, bool is_front) {
}

void UPartsWorldSubsystem::SetWheelObjectParts(UObject* Object, int32 car_id, EWheelType wheel_type, UObject* parts_object, bool is_front) {
}

void UPartsWorldSubsystem::SetRotorObjectParts2(UObject* Object, int32 car_id, const FString& rotor_name, const FString& rotor_maker_name, UObject* parts_object, bool is_left, bool is_front) {
}

void UPartsWorldSubsystem::SetFullCustomObjectParts(UObject* Object, int32 car_id, FSCustomCarPartsStruct car_parts, const TArray<FSPartsObjectInfo>& parts_obejct) {
}

void UPartsWorldSubsystem::SetCarObjectParts(UObject* Object, int32 car_id, ECustomCarPartsType parts_type, FSPartsObjectInfo parts_object) {
}

void UPartsWorldSubsystem::SetCaliperObjectParts2(UObject* Object, int32 car_id, const FString& caliper_name, const FString& caliper_maker_name, UObject* parts_object, bool is_left, bool is_front) {
}

void UPartsWorldSubsystem::SetCaliperObjectParts(UObject* Object, int32 car_id, EBrakeCaliperType caliper_type, UObject* parts_object, bool is_left, bool is_front) {
}

float UPartsWorldSubsystem::GetTireInch(UObject* Object, bool is_front) {
    return 0.0f;
}

ECustomCarPartsType UPartsWorldSubsystem::GetPartsType(int32 car_id, ECustomCarPartsKind car_kind) {
    return ECustomCarPartsType::Normal;
}

FSCustomCarPartsStruct UPartsWorldSubsystem::GetCarPartsStruct(int32 car_id) {
    return FSCustomCarPartsStruct{};
}


