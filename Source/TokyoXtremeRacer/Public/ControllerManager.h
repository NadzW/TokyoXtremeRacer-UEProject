#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ControllerCapability.h"
#include "ControllerDesc.h"
#include "ControllerId.h"
#include "ControllerModel.h"
#include "EControllerForceMode.h"
#include "EFindResultPins.h"
#include "EInputControllerType.h"
#include "EInputHatDirection.h"
#include "ETrueForceOrForceFeedback.h"
#include "FfbConditionalParam.h"
#include "FfbConstantParam.h"
#include "FfbPeriodicParam.h"
#include "FfbRampParam.h"
#include "ForceFeedbackCapableControllerId.h"
#include "TrueForceCapableControllerId.h"
#include "TrueForceDeviceContext.h"
#include "TrueForceInputKinesthetic.h"
#include "ControllerManager.generated.h"

class UControllerManagerEventListener;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UControllerManager : public UObject {
    GENERATED_BODY()
public:
    UControllerManager();

    UFUNCTION(BlueprintCallable)
    static void UpdateForceFeedbackEffectTriangle(FName Tag, int32 DurationMs, const FFfbPeriodicParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateForceFeedbackEffectSquare(FName Tag, int32 DurationMs, const FFfbPeriodicParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateForceFeedbackEffectSpring(FName Tag, int32 DurationMs, const FFfbConditionalParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateForceFeedbackEffectSine(FName Tag, int32 DurationMs, const FFfbPeriodicParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateForceFeedbackEffectSawtoothUp(FName Tag, int32 DurationMs, const FFfbPeriodicParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateForceFeedbackEffectSawtoothDown(FName Tag, int32 DurationMs, const FFfbPeriodicParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateForceFeedbackEffectRamp(FName Tag, int32 DurationMs, const FFfbRampParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateForceFeedbackEffectInertia(FName Tag, int32 DurationMs, const FFfbConditionalParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateForceFeedbackEffectFriction(FName Tag, int32 DurationMs, const FFfbConditionalParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateForceFeedbackEffectDamper(FName Tag, int32 DurationMs, const FFfbConditionalParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateForceFeedbackEffectConstant(FName Tag, int32 DurationMs, const FFfbConstantParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateControllers();
    
    UFUNCTION(BlueprintCallable)
    static bool TrueForceSetTorqueTFint32ByControllerId(const FControllerId& ID, TArray<int32> Values, float FrequencyHz, float Gain, bool Loop);
    
    UFUNCTION(BlueprintCallable)
    static bool TrueForceSetTorqueTFfloatByControllerId(const FControllerId& ID, TArray<float> Values, float FrequencyHz, float Gain, bool Loop);
    
    UFUNCTION(BlueprintCallable)
    static bool TrueForceSetTorqueKFPiecewiseByControllerId(const FControllerId& ID, TArray<float> TorqueValuesInNm, float SegmentDurationInSeconds);
    
    UFUNCTION(BlueprintCallable)
    static bool TrueForceSetTorqueKFByControllerId(const FControllerId& ID, float TorqueInNm);
    
    UFUNCTION(BlueprintCallable)
    static bool TrueForceSetGainTFByControllerId(const FControllerId& ID, float Gain);
    
    UFUNCTION(BlueprintCallable)
    static bool TrueForceSetGainKFByControllerId(const FControllerId& ID, float Gain);
    
    UFUNCTION(BlueprintCallable)
    static bool TrueForceSetDampingKFByControllerId(const FControllerId& ID, float Damping);
    
    UFUNCTION(BlueprintCallable)
    static void TrueForceGetTorqueKFByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& TorqueInNm);
    
    UFUNCTION(BlueprintCallable)
    static void TrueForceGetGainTFByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& Gain);
    
    UFUNCTION(BlueprintCallable)
    static void TrueForceGetGainKFByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& Gain);
    
    UFUNCTION(BlueprintCallable)
    static void TrueForceGetDampingKFByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& Damping);
    
    UFUNCTION(BlueprintCallable)
    static void TrueForceGetAngularVelocityRadiansByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& AngularVelocityRadiansPerSecond);
    
    UFUNCTION(BlueprintCallable)
    static void TrueForceGetAngularVelocityDegreesByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& AngularVelocityDegreesPerSecond);
    
    UFUNCTION(BlueprintCallable)
    static void TrueForceGetAngleRadiansByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& AngleRadians);
    
    UFUNCTION(BlueprintCallable)
    static void TrueForceGetAngleDegreesByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& AngleDegrees);
    
    UFUNCTION(BlueprintCallable)
    static void TrueForceClearTFForAllControllers();
    
    UFUNCTION(BlueprintCallable)
    static bool TrueForceClearTFByControllerId(const FControllerId& ID);
    
    UFUNCTION(BlueprintCallable)
    static void TrueForceClearKFForAllControllers();
    
    UFUNCTION(BlueprintCallable)
    static bool TrueForceClearKFByControllerId(const FControllerId& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ToDisplayText(EInputHatDirection HatDirection);
    
    UFUNCTION(BlueprintCallable)
    static void SetTrueForceKinestheticDamping(const FControllerId& ID, float Damping);
    
    UFUNCTION(BlueprintCallable)
    static void SetTrueForceEnabled(const FControllerId& ID, bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static bool SetOperatingRangeByControllerId(const FControllerId& ID, float RangeDegrees);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLogitechOperatingRange(const FControllerId& ID, float RangeDegrees);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLedsColorValuesByControllerId(const FControllerId& ID, int32 StartIndex, TArray<FVector3f> Values);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLedsByControllerId(const FControllerId& ID, int32 StartIndex, TArray<int32> Data);
    
    UFUNCTION(BlueprintCallable)
    static bool SetForceModeByControllerId(const FControllerId& ID, EControllerForceMode Mode);
    
    UFUNCTION(BlueprintCallable)
    static void SetControllerFfbEnabled(const FControllerId& ID, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SendTrueForceKinestheticForce(const FControllerId& ID, const FTrueForceInputKinesthetic& KFInput);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveForceFeedbackEffect(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static void PlayLedsForActiveControllers(float CurrentRpm, float RpmFirstLedTurnsOn, float RpmRedLine);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayLedsByControllerId(const FControllerId& ID, float CurrentRpm, float RpmFirstLedTurnsOn, float RpmRedLine);
    
    UFUNCTION(BlueprintCallable)
    static void OneshotForceFeedbackEffectTriangle(int32 DurationMs, const FFfbPeriodicParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void OneshotForceFeedbackEffectSquare(int32 DurationMs, const FFfbPeriodicParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void OneshotForceFeedbackEffectSpring(int32 DurationMs, const FFfbConditionalParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void OneshotForceFeedbackEffectSine(int32 DurationMs, const FFfbPeriodicParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void OneshotForceFeedbackEffectSawtoothUp(int32 DurationMs, const FFfbPeriodicParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void OneshotForceFeedbackEffectSawtoothDown(int32 DurationMs, const FFfbPeriodicParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void OneshotForceFeedbackEffectRamp(int32 DurationMs, const FFfbRampParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void OneshotForceFeedbackEffectInertia(int32 DurationMs, const FFfbConditionalParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void OneshotForceFeedbackEffectFriction(int32 DurationMs, const FFfbConditionalParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void OneshotForceFeedbackEffectDamper(int32 DurationMs, const FFfbConditionalParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void OneshotForceFeedbackEffectConstant(int32 DurationMs, const FFfbConstantParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static FString MakeControllerDescString(const FControllerDesc& ControllerDesc);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTrueForceCapable(const FControllerId& ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLogitechSDKDevice(const FControllerId& ID);
    
    UFUNCTION(BlueprintCallable)
    static void GetTrueForceSdkHasFullControl(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, bool& SdkHasFullControl);
    
    UFUNCTION(BlueprintCallable)
    static void GetTrueForceOrForceFeedbackCapableControllers(TArray<FTrueForceCapableControllerId>& TrueForceCapable, TArray<FForceFeedbackCapableControllerId>& ForceFeedbackCapable, int32 ForceFeedbackEffectTypeMask, bool ActiveOnly);
    
    UFUNCTION(BlueprintCallable)
    static float GetTrueForceKinestheticTorque(const FControllerId& ID);
    
    UFUNCTION(BlueprintCallable)
    static float GetTrueForceKinestheticDamping(const FControllerId& ID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTrueForceEnabled(const FControllerId& ID);
    
    UFUNCTION(BlueprintCallable)
    static void GetSingleTrueForceOrForceFeedbackCapableController(int32 FfbEffectTypeMask, TEnumAsByte<ETrueForceOrForceFeedback>& Result, FTrueForceCapableControllerId& TrueForceCapable, FForceFeedbackCapableControllerId& ForceFeedbackCapable);
    
    UFUNCTION(BlueprintCallable)
    static void GetSingleTrueForceEnabledController(TEnumAsByte<EFindResultPins>& FindResult, FControllerId& ControllerId, FTrueForceDeviceContext& DeviceContext);
    
    UFUNCTION(BlueprintCallable)
    static void GetSingleRumbleCapableController(TEnumAsByte<EFindResultPins>& FindResult, FControllerId& ControllerId);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FControllerId> GetPresentControllers();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FControllerDesc> GetPresentControllerDescs();
    
    UFUNCTION(BlueprintCallable)
    static void GetOperatingRangeByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& RangeDegrees);
    
    UFUNCTION(BlueprintCallable)
    static void GetOperatingRangeBoundsByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& MinDegrees, float& MaxDegrees);
    
    UFUNCTION(BlueprintCallable)
    static void GetLogitechOperatingRangeBounds(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& MinDegrees, float& MaxDegrees);
    
    UFUNCTION(BlueprintCallable)
    static void GetLogitechOperatingRange(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& RangeDegrees);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EInputControllerType GetInputControllerType(const FControllerModel& ControllerModel);
    
    UFUNCTION(BlueprintCallable)
    static void GetForceModeByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, EControllerForceMode& Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UControllerManagerEventListener* GetEventListener();
    
    UFUNCTION(BlueprintCallable)
    static void GetControllerDescByControllerId(const FControllerId& ID, FControllerDesc& Found, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void GetControllerCapabilityByControllerId(const FControllerId& ID, FControllerCapability& Capability, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FControllerId> GetActiveControllerIds();
    
    UFUNCTION(BlueprintCallable)
    static void FindControllerByHardwareId(int32 VendorId, int32 ProductId, FControllerDesc& Found, TEnumAsByte<EFindResultPins>& FindResult);
    
    UFUNCTION(BlueprintCallable)
    static void DumpPresentControllers();
    
    UFUNCTION(BlueprintCallable)
    static void ClearTrueForceAll();
    
    UFUNCTION(BlueprintCallable)
    static void ClearForceFeedbackEffects();
    
    UFUNCTION(BlueprintCallable)
    static void ClearActiveControllerIds();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckIfActiveController(const FControllerId& ID);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckControllerExists(const FControllerId& ID);
    
    UFUNCTION(BlueprintCallable)
    static bool ActivateFirstControllerWithHardwareId(const FControllerModel& Model);
    
};

