#include "CarCutInProductionWorldSubsystem.h"

UCarCutInProductionWorldSubsystem::UCarCutInProductionWorldSubsystem() {
    this->car_cut_in_helper_ = NULL;
}

UObject* UCarCutInProductionWorldSubsystem::PlayCarCutInProduction(ECarCutInProductionType Type, UObject* car_object, UObject* racemanager_object, UWidget* Widget, UWidget* hud_widget) {
    return NULL;
}

UCarCutInProductionHelperBase* UCarCutInProductionWorldSubsystem::GetSubsystemHelper() {
    return NULL;
}

void UCarCutInProductionWorldSubsystem::AddLevelSequence(ECarCutInProductionType Type, UObject* Object) {
}


