#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TireModelInterface.h"
#include "TireModelComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VEHICLEBEHAVIOR_API UTireModelComponent : public USceneComponent, public ITireModelInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Width;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double inv_radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double side_force_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_sf_slip_angle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double sf_rise_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double sf_fall_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double tire_wheel_mass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_brake_force;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_sidebrake_force;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double moi;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double inv_moi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_right;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double sprung_mass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double gravity_z_abs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double camber_angle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double toe_in_angle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double total_tire_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool enable_abs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double abs_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double brake_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double drive_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double omega;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double forward_speed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double torque_from_pu;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double current_brake_force;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double current_steer_angle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double normalized_load;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double input_brake;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double input_sidebrake;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double current_load;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector point_velocity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double side_force;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double forward_force;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double speed_0_threshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double current_grip;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double current_slip_angle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double side_force_regist;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double forward_force_regist;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double current_camber_angle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double camber_thrust_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double point_speed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double point_speed_pure;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double current_grip_for_sideforce;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double circle_length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector point_velocity_local;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector point_velocity_local_old;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double lat_slip;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double tire_torque;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector org_relative_location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector base_relative_location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator org_relative_rotation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double friction_limit_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double add_rotation_x;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double mu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Spin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double long_slip_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform current_unit_transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USceneComponent> child_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USceneComponent> child_component2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USceneComponent> blur_mesh;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRepBlur, meta=(AllowPrivateAccess=true))
    double blur_angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector forward_vector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector right_vector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector up_vector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool running_abs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double abs_running_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool abs_running_cos;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double grip_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double side_grip_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_forward_force;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_side_force;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double tmp_forward_force;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double brake_Ek;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double total_mass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double trc_torque_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double omega_from_pu;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double input_accele;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double disp_radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double inv_disp_radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SAT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool compute_SAT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator disp_rotator;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double abs_start_omega_vector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool enable_trc;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double disp_scale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double input_brake_from_abs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRollRev;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double brake_rotor_angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_drive_wheel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double use_camber_angle_from_suspension;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepRotationRotor, meta=(AllowPrivateAccess=true))
    FRotator rep_rotation_rotor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepRotation, meta=(AllowPrivateAccess=true))
    FRotator rep_rotation;
    
public:
    UTireModelComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateRotationForBP(const double dt, const double in_camber_angle_from_sus);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRepRotationRotor();
    
    UFUNCTION(BlueprintCallable)
    void OnRepRotation();
    
    UFUNCTION(BlueprintCallable)
    void OnRepBlur();
    

    // Fix for true pure virtual functions not being implemented
};

