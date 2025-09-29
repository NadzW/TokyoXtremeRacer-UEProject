#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "SuspensionModelInterface.generated.h"

class UPrimitiveComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class USuspensionModelInterface : public UInterface {
    GENERATED_BODY()
};

class ISuspensionModelInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateParameter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Update(const double dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTireRadiusOffsetForGround(const double in_offset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStrokes(const double in_extension, const double in_compression, const double in_droopconst, double in_max_droop_camber_angle, const double in_max_compression_camber_angle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSetting(const double in_strength_rate, const double in_damping_rate, const double in_damping_droop_rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPointSpeedFromBody(const FVector in_speed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBumperRubberInfo(const double in_strength, const double in_length);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBaseParameter(const double in_base_strength, const double in_strength, const double in_damping, const double in_damping_droop);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBaseInfo(const double in_sprung_mass, const double in_gravity_z);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetArmInfo(const double in_length, const bool in_is_change_angle, const bool in_is_change_offset, const double in_angle_coef, const double in_offset_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init(const bool in_compute_base_parameter, const double in_spring_mass, const double in_gravity_z, const double in_wheel_radius, UPrimitiveComponent* in_body);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetSpruncMass();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetPointSpeedFromBody();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetOffsetFromStroke();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetNormalizeLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FHitResult GetJointHitResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsFront();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetHoverDelta();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FHitResult GetHitResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetHitNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetHitLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetCurrentStroke();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetCurrentLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetCurrentHoverDelta();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetCamberAngle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetAddForce();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DidHitGround();
    
};

