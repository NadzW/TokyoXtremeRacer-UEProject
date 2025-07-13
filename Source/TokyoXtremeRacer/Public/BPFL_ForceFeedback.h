#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ControllerDesc.h"
#include "ControllerId.h"
#include "EConditionalForceFeedbackType.h"
#include "EPeriodicWaveShape.h"
#include "BPFL_ForceFeedback.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_ForceFeedback : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_ForceFeedback();

    UFUNCTION(BlueprintCallable)
    static bool SupportsAnyForceFeedbackEffectType(const FControllerDesc& Desc, int32 BitMask);
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsAnyFfbEffectTypes(int32 Types, int32 BitMask);
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsAllForceFeedbackEffectTypes(const FControllerDesc& Desc, int32 BitMask);
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsAllFfbEffectTypes(int32 Types, int32 BitMask);
    
    UFUNCTION(BlueprintCallable)
    static void StopForceFeedbackForAllControllers();
    
    UFUNCTION(BlueprintCallable)
    static void StopForceFeedbackByControllerId(const FControllerId& ID);
    
    UFUNCTION(BlueprintCallable)
    static void EnableForceFeedbackControllersWithSteeringBound();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoSelectForceFeedbackCapableController();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyForceFeedbackToSingleController_Ramp(int32 LengthMs, float BeginSignedStrengh, float EndSignedStrength);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyForceFeedbackToSingleController_Periodic(int32 LengthMs, EPeriodicWaveShape Shape, int32 PeriodMs, float AverageSignedStrength, float PeakSignedStrength, float startingPhase);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyForceFeedbackToSingleController_Constant(int32 LengthMs, float SignedStrength);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyForceFeedbackToActiveControllers_Ramp(int32 LengthMs, float BeginSignedStrengh, float EndSignedStrength);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyForceFeedbackToActiveControllers_Periodic(int32 LengthMs, EPeriodicWaveShape Shape, int32 PeriodMs, float AverageSignedStrength, float PeakSignedStrength, float startingPhase);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyForceFeedbackToActiveControllers_Constant(int32 LengthMs, float SignedStrength);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyForceFeedbackToActiveControllers_Conditional(int32 LengthMs, EConditionalForceFeedbackType Type, float MinStrength, float MaxStrength, float Coefficient, float deadzoneSize, float deadzoneCenter);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyForceFeedbackByControllerId_Ramp(const FControllerId& ID, int32 LengthMs, float BeginSignedStrengh, float EndSignedStrength);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyForceFeedbackByControllerId_Periodic(const FControllerId& ID, int32 LengthMs, EPeriodicWaveShape Shape, int32 PeriodMs, float AverageSignedStrength, float PeakSignedStrength, float startingPhase);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyForceFeedbackByControllerId_Constant(const FControllerId& ID, int32 LengthMs, float SignedStrength);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyForceFeedbackByControllerId_Conditional(const FControllerId& ID, int32 LengthMs, EConditionalForceFeedbackType Type, float MinStrength, float MaxStrength, float Coefficient, float deadzoneSize, float deadzoneCenter);
    
};

