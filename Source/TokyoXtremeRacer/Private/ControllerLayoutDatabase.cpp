#include "ControllerLayoutDatabase.h"

UControllerLayoutDatabase::UControllerLayoutDatabase() {
    this->Xbox360 = NULL;
    this->XBoxOne = NULL;
    this->PS4 = NULL;
    this->PS5 = NULL;
    this->SteamDeck = NULL;
    this->GenericController = NULL;
}

FString UControllerLayoutDatabase::ToDisplayTextString(const FControllerLayoutValue& ControllerLayoutValue, bool bFullAxisName, EInputHatDirection HatDirection) {
    return TEXT("");
}

void UControllerLayoutDatabase::GetUnidirectionalAxisOnDigitalInfo(const FControllerLayoutValue& ControllerLayoutValue, TEnumAsByte<EFindResultPins>& FindResult, FAxisOnDigitalInputMappingInfo& AxisOnDigitalInfo) {
}

void UControllerLayoutDatabase::GetGenericControllerLayoutValue(const FControllerLayoutKey& ControllerLayoutKey, FControllerLayoutValue& ControllerLayoutValue, TEnumAsByte<EFindResultPins>& FindResult) const {
}

UGenericControllerLayoutData* UControllerLayoutDatabase::GetGenericController() const {
    return NULL;
}

void UControllerLayoutDatabase::GetByControllerModel(const FControllerModel& ControllerModel, UControllerLayoutData*& ControllerLayoutData, TEnumAsByte<EFindResultPins>& FindResult) const {
}


