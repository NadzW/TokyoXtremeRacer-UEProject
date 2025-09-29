#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "ControllerId.h"
#include "ControllerLayoutKey.h"
#include "ControllerLayoutValue.h"
#include "ControllerMappingDesc.h"
#include "ControllerModel.h"
#include "EAnalogInputSignalPolarity.h"
#include "EFindResultPins.h"
#include "EInputActionSemantic.h"
#include "EInputHatDirection.h"
#include "EQueryControllerLayoutValueFlag.h"
#include "InputActionMappingValue.h"
#include "InputActionMappingValues.h"
#include "InputMappingPollData.h"
#include "InputMappingPollInfo.h"
#include "BPFL_InputMapping.generated.h"

class IEnhancedInputSubsystemInterface;
class UEnhancedInputSubsystemInterface;
class UControllerLayoutDatabase;
class UControllerModelInputMappingTableAssociation;
class UEnhancedPlayerInput;
class UInputAction;
class UInputActionSemanticAssociation;
class UInputMappingContext;
class UInputMappingTable;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_InputMapping : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_InputMapping();

    UFUNCTION(BlueprintCallable)
    static void SetOutGameInjectionEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetInputMappingTableForControllerModel(FControllerModel ControllerModel, UInputMappingTable* InputMappingTable);
    
    UFUNCTION(BlueprintCallable)
    static void SetInputMappingTableBindingAllowed(bool bAllowed);
    
    UFUNCTION(BlueprintCallable)
    static void SetInputMappingTableAssociation(UControllerModelInputMappingTableAssociation* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInputActionSemanticAssociation(UInputActionSemanticAssociation* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInjectionEnabled(bool OutGame, bool InGame);
    
    UFUNCTION(BlueprintCallable)
    static void SetInGameInjectionEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void RumbleTriggersByControllerId(const FControllerId& ID, float LeftIntensity, float RightIntensity, int32 DurationMs);
    
    UFUNCTION(BlueprintCallable)
    static void RumbleTriggersActiveControllers(float LeftIntensity, float RightIntensity, int32 DurationMs);
    
    UFUNCTION(BlueprintCallable)
    static void RumbleByControllerId(const FControllerId& ID, float LowFrequencyIntensity, float HighFrequencyIntensity, int32 DurationMs);
    
    UFUNCTION(BlueprintCallable)
    static void RumbleActiveControllers(float LowFrequencyIntensity, float HighFrequencyIntensity, int32 DurationMs);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveInputMappingTableForControllerModel(FControllerModel ControllerModel);
    
    UFUNCTION(BlueprintCallable)
    static void QuerySingleInputActionMappedFromInputActionSemantic(EInputActionSemantic InputActionSemantic, UInputAction*& InputAction, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void QuerySingleControllerMappingDescForInputActionSemantic(EInputActionSemantic InputActionSemantic, FControllerMappingDesc& ControllerMappingDesc, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void QuerySingleControllerLayoutValueForInputActionSemantic(EInputActionSemantic InputActionSemantic, FControllerLayoutValue& ControllerLayoutValue, FControllerMappingDesc& ControllerMappingDesc, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void QuerySingleControllerLayoutValueForInputAction(UInputAction* InputAction, FControllerLayoutValue& ControllerLayoutValue, FControllerMappingDesc& ControllerMappingDesc, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void QuerySingleControllerInputFullSlateBrushForInputActionSemantic(UControllerLayoutDatabase* ControllerLayoutDatabase, EInputActionSemantic InputActionSemantic, bool bAllowGeneric, FSlateBrush& SlateBrush, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void QuerySingleControllerInputFullSlateBrushForInputAction(UControllerLayoutDatabase* ControllerLayoutDatabase, UInputAction* InputAction, bool bAllowGeneric, bool bAllowKeyboard, const TScriptInterface<IEnhancedInputSubsystemInterface>& EnhancedInputSubsystemInterface, FSlateBrush& SlateBrush, bool& bIsKeyboard, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void QueryInputActionSemanticMappedToInputAction(UInputAction* InputAction, EInputActionSemantic& InputActionSemantic, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FControllerModel, FInputActionMappingValues> QueryInputActionMappingValuesMappedToInputActionSemantic(EInputActionSemantic InputActionSemantic);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FControllerModel, FInputActionMappingValues> QueryInputActionMappingValuesMappedToInputAction(UInputAction* InputAction);
    
    UFUNCTION(BlueprintCallable)
    static void QueryControllerLayoutValue(UControllerLayoutDatabase* ControllerLayoutDatabase, FControllerModel ControllerModel, FControllerLayoutKey ControllerLayoutKey, int32 Flags, FControllerLayoutValue& ControllerLayoutValue, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void QueryControllerInputFullSlateBrushOrFallback(UControllerLayoutDatabase* ControllerLayoutDatabase, EInputActionSemantic InputActionSemantic, FControllerModel ControllerModel, EQueryControllerLayoutValueFlag Flags, const FInputActionMappingValue& InputActionMappingValue, FSlateBrush& SlateBrush, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void QueryControllerInputFullSlateBrush(const FControllerLayoutValue& ControllerLayoutValue, EInputActionSemantic InputActionSemantic, EInputHatDirection HatDirection, EAnalogInputSignalPolarity Polarity, FSlateBrush& SlateBrush, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void PollHatByHardwareId(int32 VendorId, int32 ProductId, uint8 HatIndex, EInputHatDirection& HatDirection, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void PollHatByControllerId(const FControllerId& ID, uint8 HatIndex, EInputHatDirection& HatDirection, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void PollButtonByHardwareId(int32 VendorId, int32 ProductId, uint8 ButtonIndex, bool& ButtonPressed, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void PollButtonByControllerId(const FControllerId& ID, uint8 ButtonIndex, bool& ButtonPressed, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void PollAxisByHardwareId(int32 VendorId, int32 ProductId, uint8 AxisIndex, float& AxisValue, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void PollAxisByControllerId(const FControllerId& ID, uint8 AxisIndex, float& AxisValue, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void PollAndInjectInputActionsEnhancedPlayerInputActiveOnly(UEnhancedPlayerInput* EnhancedPlayerInput);
    
    UFUNCTION(BlueprintCallable)
    static void PollAndInjectInputActionsEnhancedPlayerInput(UEnhancedPlayerInput* EnhancedPlayerInput);
    
    UFUNCTION(BlueprintCallable)
    static void PollAndInjectInputActionsActiveOnly(const TScriptInterface<IEnhancedInputSubsystemInterface>& SubsystemInterface);
    
    UFUNCTION(BlueprintCallable)
    static void PollAndInjectInputActions(const TScriptInterface<IEnhancedInputSubsystemInterface>& SubsystemInterface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_ControllerModelControllerModel(const FControllerModel& LHS, const FControllerModel& RHS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_ControllerIdControllerId(const FControllerId& LHS, const FControllerId& RHS);
    
    UFUNCTION(BlueprintCallable)
    static bool NearlyEqualPollData(const FInputMappingPollData& A, const FInputMappingPollData& B, float AxisThreshold, float DeltaSeconds, FInputMappingPollInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    static void MakeSingleControllerInputFullDescriptionForInputActionSemantic(UControllerLayoutDatabase* ControllerLayoutDatabase, EInputActionSemantic InputActionSemantic, bool bAllowGeneric, FString& Description, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void MakeSingleControllerInputFullDescriptionForInputAction(UControllerLayoutDatabase* ControllerLayoutDatabase, UInputAction* InputAction, bool bAllowGeneric, bool bAllowKeyboard, TArray<UInputMappingContext*> InputMappingContexts, FString& Description, bool& bIsKeyboard, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static FString MakeControllerInputFullDescriptionOrFallbackEx(UControllerLayoutDatabase* ControllerLayoutDatabase, bool bIsDigitalInputSemantic, FControllerModel ControllerModel, FControllerLayoutKey ControllerLayoutKey, int32 Flags, EInputHatDirection HatDirection, EAnalogInputSignalPolarity Polarity);
    
    UFUNCTION(BlueprintCallable)
    static FString MakeControllerInputFullDescriptionOrFallback(UControllerLayoutDatabase* ControllerLayoutDatabase, EInputActionSemantic InputActionSemantic, FControllerModel ControllerModel, EQueryControllerLayoutValueFlag Flags, const FInputActionMappingValue& InputActionMappingValue);
    
    UFUNCTION(BlueprintCallable)
    static FString MakeControllerInputFullDescriptionFallback(FControllerLayoutKey ControllerLayoutKey, EInputHatDirection HatDirection, EAnalogInputSignalPolarity Polarity);
    
    UFUNCTION(BlueprintCallable)
    static void MakeControllerInputFullDescription(const FControllerLayoutValue& ControllerLayoutValue, bool bIsGenericController, EInputActionSemantic InputActionSemantic, EInputHatDirection HatDirection, EAnalogInputSignalPolarity Polarity, FString& String, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Less_ControllerModelControllerModel(const FControllerModel& LHS, const FControllerModel& RHS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Less_ControllerIdControllerId(const FControllerId& LHS, const FControllerId& RHS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOutGameInputActionSemantic(EInputActionSemantic Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInGameInputActionSemantic(EInputActionSemantic Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnalogInputActionSemantic(EInputActionSemantic Value);
    
    UFUNCTION(BlueprintCallable)
    static void GetPollDataByControllerId(const FControllerId& ID, FInputMappingPollData& InputMappingPollData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOutGameInjectionEnabled();
    
    UFUNCTION(BlueprintCallable)
    static void GetOrAddInputMappingTableForControllerModel(FControllerModel ControllerModel, UInputMappingTable*& Out);
    
    UFUNCTION(BlueprintCallable)
    static void GetInputMappingTableForControllerModel(FControllerModel ControllerModel, UInputMappingTable*& Out, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static bool GetInputMappingTableBindingAllowed();
    
    UFUNCTION(BlueprintCallable)
    static UInputActionSemanticAssociation* GetInputActionSemanticAssociation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetInjectionEnabled(bool& OutGame, bool& InGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetInGameInjectionEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_ControllerModelControllerModel(const FControllerModel& LHS, const FControllerModel& RHS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_ControllerIdControllerId(const FControllerId& LHS, const FControllerId& RHS);
    
    UFUNCTION(BlueprintCallable)
    static void ClearInputMappingTables();
    
    UFUNCTION(BlueprintCallable)
    static void ClearInputActionSemanticAssociation();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckModelHasInputActionSemanticBound(FControllerModel ControllerModel, EInputActionSemantic Semantic);
    
    UFUNCTION(BlueprintCallable)
    static bool BindPresetForControllerModel(UControllerModelInputMappingTableAssociation* CMIMT, const FControllerModel& ControllerModel, bool bClearExisting, bool bAllowNotConnected, float DeadzoneThreshold);
    
    UFUNCTION(BlueprintCallable)
    static void AppendFromInputMappingTableAssociation(UControllerModelInputMappingTableAssociation* Value);
    
    UFUNCTION(BlueprintCallable)
    static void AppendFromInputActionSemanticAssociation(UInputActionSemanticAssociation* Value);
    
};

