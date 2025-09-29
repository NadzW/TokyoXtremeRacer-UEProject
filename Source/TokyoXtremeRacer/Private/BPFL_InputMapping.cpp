#include "BPFL_InputMapping.h"

UBPFL_InputMapping::UBPFL_InputMapping() {
}

void UBPFL_InputMapping::SetOutGameInjectionEnabled(bool bEnabled) {
}

void UBPFL_InputMapping::SetInputMappingTableForControllerModel(FControllerModel ControllerModel, UInputMappingTable* InputMappingTable) {
}

void UBPFL_InputMapping::SetInputMappingTableBindingAllowed(bool bAllowed) {
}

void UBPFL_InputMapping::SetInputMappingTableAssociation(UControllerModelInputMappingTableAssociation* Value) {
}

void UBPFL_InputMapping::SetInputActionSemanticAssociation(UInputActionSemanticAssociation* Value) {
}

void UBPFL_InputMapping::SetInjectionEnabled(bool OutGame, bool InGame) {
}

void UBPFL_InputMapping::SetInGameInjectionEnabled(bool bEnabled) {
}

void UBPFL_InputMapping::RumbleTriggersByControllerId(const FControllerId& ID, float LeftIntensity, float RightIntensity, int32 DurationMs) {
}

void UBPFL_InputMapping::RumbleTriggersActiveControllers(float LeftIntensity, float RightIntensity, int32 DurationMs) {
}

void UBPFL_InputMapping::RumbleByControllerId(const FControllerId& ID, float LowFrequencyIntensity, float HighFrequencyIntensity, int32 DurationMs) {
}

void UBPFL_InputMapping::RumbleActiveControllers(float LowFrequencyIntensity, float HighFrequencyIntensity, int32 DurationMs) {
}

void UBPFL_InputMapping::RemoveInputMappingTableForControllerModel(FControllerModel ControllerModel) {
}

void UBPFL_InputMapping::QuerySingleInputActionMappedFromInputActionSemantic(EInputActionSemantic InputActionSemantic, UInputAction*& InputAction, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::QuerySingleControllerMappingDescForInputActionSemantic(EInputActionSemantic InputActionSemantic, FControllerMappingDesc& ControllerMappingDesc, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::QuerySingleControllerLayoutValueForInputActionSemantic(EInputActionSemantic InputActionSemantic, FControllerLayoutValue& ControllerLayoutValue, FControllerMappingDesc& ControllerMappingDesc, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::QuerySingleControllerLayoutValueForInputAction(UInputAction* InputAction, FControllerLayoutValue& ControllerLayoutValue, FControllerMappingDesc& ControllerMappingDesc, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::QuerySingleControllerInputFullSlateBrushForInputActionSemantic(UControllerLayoutDatabase* ControllerLayoutDatabase, EInputActionSemantic InputActionSemantic, bool bAllowGeneric, FSlateBrush& SlateBrush, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::QuerySingleControllerInputFullSlateBrushForInputAction(UControllerLayoutDatabase* ControllerLayoutDatabase, UInputAction* InputAction, bool bAllowGeneric, bool bAllowKeyboard, const TScriptInterface<IEnhancedInputSubsystemInterface>& EnhancedInputSubsystemInterface, FSlateBrush& SlateBrush, bool& bIsKeyboard, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::QueryInputActionSemanticMappedToInputAction(UInputAction* InputAction, EInputActionSemantic& InputActionSemantic, TEnumAsByte<EFindResultPins>& FindResult) {
}

TMap<FControllerModel, FInputActionMappingValues> UBPFL_InputMapping::QueryInputActionMappingValuesMappedToInputActionSemantic(EInputActionSemantic InputActionSemantic) {
    return TMap<FControllerModel, FInputActionMappingValues>();
}

TMap<FControllerModel, FInputActionMappingValues> UBPFL_InputMapping::QueryInputActionMappingValuesMappedToInputAction(UInputAction* InputAction) {
    return TMap<FControllerModel, FInputActionMappingValues>();
}

void UBPFL_InputMapping::QueryControllerLayoutValue(UControllerLayoutDatabase* ControllerLayoutDatabase, FControllerModel ControllerModel, FControllerLayoutKey ControllerLayoutKey, int32 Flags, FControllerLayoutValue& ControllerLayoutValue, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::QueryControllerInputFullSlateBrushOrFallback(UControllerLayoutDatabase* ControllerLayoutDatabase, EInputActionSemantic InputActionSemantic, FControllerModel ControllerModel, EQueryControllerLayoutValueFlag Flags, const FInputActionMappingValue& InputActionMappingValue, FSlateBrush& SlateBrush, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::QueryControllerInputFullSlateBrush(const FControllerLayoutValue& ControllerLayoutValue, EInputActionSemantic InputActionSemantic, EInputHatDirection HatDirection, EAnalogInputSignalPolarity Polarity, FSlateBrush& SlateBrush, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::PollHatByHardwareId(int32 VendorId, int32 ProductId, uint8 HatIndex, EInputHatDirection& HatDirection, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::PollHatByControllerId(const FControllerId& ID, uint8 HatIndex, EInputHatDirection& HatDirection, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::PollButtonByHardwareId(int32 VendorId, int32 ProductId, uint8 ButtonIndex, bool& ButtonPressed, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::PollButtonByControllerId(const FControllerId& ID, uint8 ButtonIndex, bool& ButtonPressed, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::PollAxisByHardwareId(int32 VendorId, int32 ProductId, uint8 AxisIndex, float& AxisValue, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::PollAxisByControllerId(const FControllerId& ID, uint8 AxisIndex, float& AxisValue, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::PollAndInjectInputActionsEnhancedPlayerInputActiveOnly(UEnhancedPlayerInput* EnhancedPlayerInput) {
}

void UBPFL_InputMapping::PollAndInjectInputActionsEnhancedPlayerInput(UEnhancedPlayerInput* EnhancedPlayerInput) {
}

void UBPFL_InputMapping::PollAndInjectInputActionsActiveOnly(const TScriptInterface<IEnhancedInputSubsystemInterface>& SubsystemInterface) {
}

void UBPFL_InputMapping::PollAndInjectInputActions(const TScriptInterface<IEnhancedInputSubsystemInterface>& SubsystemInterface) {
}

bool UBPFL_InputMapping::NotEqual_ControllerModelControllerModel(const FControllerModel& LHS, const FControllerModel& RHS) {
    return false;
}

bool UBPFL_InputMapping::NotEqual_ControllerIdControllerId(const FControllerId& LHS, const FControllerId& RHS) {
    return false;
}

bool UBPFL_InputMapping::NearlyEqualPollData(const FInputMappingPollData& A, const FInputMappingPollData& B, float AxisThreshold, float DeltaSeconds, FInputMappingPollInfo& Info) {
    return false;
}

void UBPFL_InputMapping::MakeSingleControllerInputFullDescriptionForInputActionSemantic(UControllerLayoutDatabase* ControllerLayoutDatabase, EInputActionSemantic InputActionSemantic, bool bAllowGeneric, FString& Description, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UBPFL_InputMapping::MakeSingleControllerInputFullDescriptionForInputAction(UControllerLayoutDatabase* ControllerLayoutDatabase, UInputAction* InputAction, bool bAllowGeneric, bool bAllowKeyboard, TArray<UInputMappingContext*> InputMappingContexts, FString& Description, bool& bIsKeyboard, TEnumAsByte<EFindResultPins>& FindResult) {
}

FString UBPFL_InputMapping::MakeControllerInputFullDescriptionOrFallbackEx(UControllerLayoutDatabase* ControllerLayoutDatabase, bool bIsDigitalInputSemantic, FControllerModel ControllerModel, FControllerLayoutKey ControllerLayoutKey, int32 Flags, EInputHatDirection HatDirection, EAnalogInputSignalPolarity Polarity) {
    return TEXT("");
}

FString UBPFL_InputMapping::MakeControllerInputFullDescriptionOrFallback(UControllerLayoutDatabase* ControllerLayoutDatabase, EInputActionSemantic InputActionSemantic, FControllerModel ControllerModel, EQueryControllerLayoutValueFlag Flags, const FInputActionMappingValue& InputActionMappingValue) {
    return TEXT("");
}

FString UBPFL_InputMapping::MakeControllerInputFullDescriptionFallback(FControllerLayoutKey ControllerLayoutKey, EInputHatDirection HatDirection, EAnalogInputSignalPolarity Polarity) {
    return TEXT("");
}

void UBPFL_InputMapping::MakeControllerInputFullDescription(const FControllerLayoutValue& ControllerLayoutValue, bool bIsGenericController, EInputActionSemantic InputActionSemantic, EInputHatDirection HatDirection, EAnalogInputSignalPolarity Polarity, FString& String, TEnumAsByte<EFindResultPins>& FindResult) {
}

bool UBPFL_InputMapping::Less_ControllerModelControllerModel(const FControllerModel& LHS, const FControllerModel& RHS) {
    return false;
}

bool UBPFL_InputMapping::Less_ControllerIdControllerId(const FControllerId& LHS, const FControllerId& RHS) {
    return false;
}

bool UBPFL_InputMapping::IsOutGameInputActionSemantic(EInputActionSemantic Value) {
    return false;
}

bool UBPFL_InputMapping::IsInGameInputActionSemantic(EInputActionSemantic Value) {
    return false;
}

bool UBPFL_InputMapping::IsAnalogInputActionSemantic(EInputActionSemantic Value) {
    return false;
}

void UBPFL_InputMapping::GetPollDataByControllerId(const FControllerId& ID, FInputMappingPollData& InputMappingPollData) {
}

bool UBPFL_InputMapping::GetOutGameInjectionEnabled() {
    return false;
}

void UBPFL_InputMapping::GetOrAddInputMappingTableForControllerModel(FControllerModel ControllerModel, UInputMappingTable*& Out) {
}

void UBPFL_InputMapping::GetInputMappingTableForControllerModel(FControllerModel ControllerModel, UInputMappingTable*& Out, TEnumAsByte<EFindResultPins>& FindResult) {
}

bool UBPFL_InputMapping::GetInputMappingTableBindingAllowed() {
    return false;
}

UInputActionSemanticAssociation* UBPFL_InputMapping::GetInputActionSemanticAssociation() {
    return NULL;
}

void UBPFL_InputMapping::GetInjectionEnabled(bool& OutGame, bool& InGame) {
}

bool UBPFL_InputMapping::GetInGameInjectionEnabled() {
    return false;
}

bool UBPFL_InputMapping::EqualEqual_ControllerModelControllerModel(const FControllerModel& LHS, const FControllerModel& RHS) {
    return false;
}

bool UBPFL_InputMapping::EqualEqual_ControllerIdControllerId(const FControllerId& LHS, const FControllerId& RHS) {
    return false;
}

void UBPFL_InputMapping::ClearInputMappingTables() {
}

void UBPFL_InputMapping::ClearInputActionSemanticAssociation() {
}

bool UBPFL_InputMapping::CheckModelHasInputActionSemanticBound(FControllerModel ControllerModel, EInputActionSemantic Semantic) {
    return false;
}

bool UBPFL_InputMapping::BindPresetForControllerModel(UControllerModelInputMappingTableAssociation* CMIMT, const FControllerModel& ControllerModel, bool bClearExisting, bool bAllowNotConnected, float DeadzoneThreshold) {
    return false;
}

void UBPFL_InputMapping::AppendFromInputMappingTableAssociation(UControllerModelInputMappingTableAssociation* Value) {
}

void UBPFL_InputMapping::AppendFromInputActionSemanticAssociation(UInputActionSemanticAssociation* Value) {
}


