#include "CustomPartsLoadAsyncActionBase.h"

UCustomPartsLoadAsyncActionBase::UCustomPartsLoadAsyncActionBase() {
    this->car_object_ = NULL;
}

UCustomPartsLoadAsyncActionBase* UCustomPartsLoadAsyncActionBase::CustomPartsLoadAndSetCar2(UObject* WorldContextObject, UObject* car_object, int32 car_id, const FString& car_name, const FString& car_maker_name, ECustomCarPartsKind parts_kind, ECustomCarPartsType parts_type, bool is_change_muffler) {
    return NULL;
}

UCustomPartsLoadAsyncActionBase* UCustomPartsLoadAsyncActionBase::CustomPartsLoadAndSetCar(UObject* WorldContextObject, UObject* car_object, int32 car_id, ECarType car_type, ECustomCarPartsKind parts_kind, ECustomCarPartsType parts_type) {
    return NULL;
}


