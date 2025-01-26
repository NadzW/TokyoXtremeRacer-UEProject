#include "PartsLoadAsyncActionBase.h"

UPartsLoadAsyncActionBase::UPartsLoadAsyncActionBase() {
    this->car_object_ = NULL;
}

UPartsLoadAsyncActionBase* UPartsLoadAsyncActionBase::FullCustomPartsLoadAndSetCar2(UObject* WorldContextObject, UObject* car_object, int32 car_id, const FString& car_name, const FString& maker_name, FSCustomCarPartsStruct parts, bool is_pit_wheel) {
    return NULL;
}

UPartsLoadAsyncActionBase* UPartsLoadAsyncActionBase::FullCustomPartsLoadAndSetCar(UObject* WorldContextObject, UObject* car_object, int32 car_id, ECarType car_type, FSCustomCarPartsStruct parts, bool is_pit_wheel) {
    return NULL;
}


