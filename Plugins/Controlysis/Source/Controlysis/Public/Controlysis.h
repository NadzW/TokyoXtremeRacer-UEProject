#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ConditionalForceFeedbackType.h"
#include "EGenericControllerType.h"
#include "GenericControllerId.h"
#include "GenericControllerLayout.h"
#include "HatDirection.h"
#include "WaveShape.h"
#include "Controlysis.generated.h"

class UControlysisEventListener;

UCLASS(Blueprintable)
class CONTROLYSIS_API UControlysis : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UControlysis();

    UFUNCTION(BlueprintCallable)
    static void UpdateControllersDetection();
    
    UFUNCTION(BlueprintCallable)
    static void RumbleTriggers(const FGenericControllerId& Controller, int32 left_rumble, int32 right_rumble, int32 length_ms);
    
    UFUNCTION(BlueprintCallable)
    static void Rumble(const FGenericControllerId& Controller, int32 low_frequency_rumble, int32 high_frequency_rumble, int32 length_ms);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<HatDirection> PollHat(const FGenericControllerId& Controller, uint8 hat);
    
    UFUNCTION(BlueprintCallable)
    static bool PollButton(const FGenericControllerId& Controller, uint8 Button);
    
    UFUNCTION(BlueprintCallable)
    static void PollBall(const FGenericControllerId& Controller, uint8 ball, int32& DeltaX, int32& DeltaY);
    
    UFUNCTION(BlueprintCallable)
    static float PollAxis(const FGenericControllerId& Controller, uint8 Axis);
    
    UFUNCTION(BlueprintCallable)
    static EGenericControllerType GetGenericControllerType(int32 vid, int32 pid);
    
    UFUNCTION(BlueprintCallable)
    static UControlysisEventListener* GetEventListener();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGenericControllerId> GetControllers();
    
    UFUNCTION(BlueprintCallable)
    static FGenericControllerLayout GetControllerLayout(const FGenericControllerId& Controller);
    
    UFUNCTION(BlueprintCallable)
    static FString GetControllerHapticDiagnostics(const FGenericControllerId& Controller);
    
    UFUNCTION(BlueprintCallable)
    static void ForceFeedback_Stop(const FGenericControllerId& Controller, int32 existing_effect_id);
    
    UFUNCTION(BlueprintCallable)
    static void ForceFeedback_SetAutocentering(const FGenericControllerId& Controller, float Strength);
    
    UFUNCTION(BlueprintCallable)
    static void ForceFeedback_Rumble(const FGenericControllerId& Controller, int32 length_ms, float strength_largemotor, float strength_smallmotor, int32& resulting_effect_id, int32 existing_effect_id, bool infinite);
    
    UFUNCTION(BlueprintCallable)
    static void ForceFeedback_Ramp(const FGenericControllerId& Controller, int32 length_ms, float strength_begin, float strength_end, float directionHeading, float directionPitch, int32& resulting_effect_id, int32 existing_effect_id);
    
    UFUNCTION(BlueprintCallable)
    static void ForceFeedback_Periodic(const FGenericControllerId& Controller, int32 length_ms, int32 period_ms, float averageStrength, float peakStrength, float directionHeading, float directionPitch, int32& resulting_effect_id, TEnumAsByte<WaveShape> Shape, float startingPhase, int32 existing_effect_id, bool infinite);
    
    UFUNCTION(BlueprintCallable)
    static void ForceFeedback_Constant(const FGenericControllerId& Controller, int32 length_ms, float Strength, float directionHeading, float directionPitch, int32& resulting_effect_id, int32 existing_effect_id, bool infinite);
    
    UFUNCTION(BlueprintCallable)
    static void ForceFeedback_Conditional(const FGenericControllerId& Controller, int32 length_ms, int32& resulting_effect_id, TEnumAsByte<ConditionalForceFeedbackType> Type, float strength_at_Xmin, float strength_at_Xmax, float strength_at_Ymin, float strength_at_Ymax, float strength_at_Zmin, float strength_at_Zmax, float Coefficient, float deadzoneSize, FVector deadzoneCenter, int32 existing_effect_id, bool infinite);
    
};

