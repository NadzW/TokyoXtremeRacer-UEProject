#include "AutoDriveConfigurationSubsystem.h"

UAutoDriveConfigurationSubsystem::UAutoDriveConfigurationSubsystem() {
    this->BlockMethodDataTable = NULL;
    this->OvertakeAbilityTable = NULL;
    this->RandomLaneChangeLateTable = NULL;
    this->TorqueSpecEffectTable = NULL;
    this->GripSpecEffectTable = NULL;
    this->PlayEffectSpecEffectTable = NULL;
    this->ReoverySPSpecEffectTable = NULL;
    this->DriftPreferenceTable = NULL;
    this->CrusingParameterTable = NULL;
    this->RivalDrivingParameterTable = NULL;
}

FSRivalDrivingParameter UAutoDriveConfigurationSubsystem::RivalDrivingParameter(const FName RivalID) const {
    return FSRivalDrivingParameter{};
}

float UAutoDriveConfigurationSubsystem::ReturnTorqueSpecEffect(ERivalSpecEffect SpecRivalEffect) {
    return 0.0f;
}

float UAutoDriveConfigurationSubsystem::ReturnRecoverySPSpecEffect(ERivalSpecEffect SpecRivalEffect) {
    return 0.0f;
}

float UAutoDriveConfigurationSubsystem::ReturnRandomLaneChangeRate(ERivalRandomLaneChange RivalRandomLaneChange) {
    return 0.0f;
}

float UAutoDriveConfigurationSubsystem::ReturnPlayEffectSpecEffect(ERivalSpecEffect SpecRivalEffect) {
    return 0.0f;
}

float UAutoDriveConfigurationSubsystem::ReturnOvertakePredictSecond(ERivalOvertakeAbility RivalOvertakeAbility) {
    return 0.0f;
}

float UAutoDriveConfigurationSubsystem::ReturnGripSpecEffect(ERivalSpecEffect SpecRivalEffect) {
    return 0.0f;
}

float UAutoDriveConfigurationSubsystem::ReturnDriftPreference(ERivalDriftPreference DriftPreference) {
    return 0.0f;
}

FAutoDriveCrusingDefinitionParameter UAutoDriveConfigurationSubsystem::ReturnCrusingParameter(const EAutoDriveCrusingType CrusingType) {
    return FAutoDriveCrusingDefinitionParameter{};
}

float UAutoDriveConfigurationSubsystem::ReturnBlockRate(EBlockMethod OvertakeMethod) {
    return 0.0f;
}

bool UAutoDriveConfigurationSubsystem::LoadRivalDrivingParameters(TSoftObjectPtr<UDataTable> RivalDrivingParameterDataTable) {
    return false;
}

void UAutoDriveConfigurationSubsystem::LoadDataTables(FSRivalParameterDataTable RivalParameterDataTable) {
}

UBP_CourseParameter* UAutoDriveConfigurationSubsystem::LoadCourseParameter(UAutoDriveCourseParameterData* DataAsset, UObject* Outer) {
    return NULL;
}

UBP_AutoDriveDriverParameter* UAutoDriveConfigurationSubsystem::LoadAutoDriveDriverParameter(UAutoDriveDriverParameterData* DataAsset, UObject* Outer) {
    return NULL;
}

bool UAutoDriveConfigurationSubsystem::IsLoadRivalDrivingParameterDataTable() const {
    return false;
}

UAutoDriveConfigurationSubsystem* UAutoDriveConfigurationSubsystem::GetAutoDriveConfigurationSubsystemWithContext(const UObject* WorldContextObject) {
    return NULL;
}

UBP_AINativeConfigParameter* UAutoDriveConfigurationSubsystem::ConvertToAINativeConfigurationParameter(UBP_CourseParameter* BPCourseParameter, UBP_AutoDriveDriverParameter* BPAutoDriveDriverParameter, UObject* Outer) {
    return NULL;
}


