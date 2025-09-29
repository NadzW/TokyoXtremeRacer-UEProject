#include "ControllerModelInputMappingTableAssociation.h"

UControllerModelInputMappingTableAssociation::UControllerModelInputMappingTableAssociation() {
    this->Xbox360 = NULL;
    this->XBoxOne = NULL;
    this->PS4 = NULL;
    this->PS5 = NULL;
    this->PS5OnPS5 = NULL;
}

void UControllerModelInputMappingTableAssociation::GetByControllerModel(const FControllerModel& ControllerModel, UInputMappingTable*& Preset, TEnumAsByte<EFindResultPins>& FindResult) const {
}


