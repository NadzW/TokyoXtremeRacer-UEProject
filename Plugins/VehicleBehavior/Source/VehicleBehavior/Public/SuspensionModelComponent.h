#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "UObject/NoExportTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "SuspensionModelInterface.h"
#include "Templates/SubclassOf.h"
#include "SuspensionModelComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VEHICLEBEHAVIOR_API USuspensionModelComponent : public USceneComponent, public ISuspensionModelInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSuspensionModelComponentSteppedOnJoint, bool, is_front, bool, is_right);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuspensionModelComponentSteppedOnJoint OnSteppedOnJoint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double bumper_rubber_length;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double bumper_rubber_strength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Strength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_compression;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Damping;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_droop;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double damping_droop;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double extension;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_droop_camber_angle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_compression_camber_angle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double init_wheel_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double wheel_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_right;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double base_strengh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool auto_detect_parent_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool use_multi_trace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString check_world_for_multi_trace;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double compute_base_fps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* parent_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* tire_component;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double strength_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double damping_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double damping_droop_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double bump_cycle_per_m;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double bump_hight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double bump_forward_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_init;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_contact;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double hover_delta;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double last_hover_delta;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double wheel_offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult trace_hit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double scaled_wheel_radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double wheel_radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double sprung_mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> surface_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector add_force_v;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ignore_actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ignore_actor_classs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double scaled_wheel_width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool self_init;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double current_hover_delta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 compute_times;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double hover_step;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double sus_pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_disp_debug_arrow;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double normalize_load;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double recip_gravity_z;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Force;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double recip_rest_load;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double gravity_z;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double tmp_force;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double strength_min_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double strength_mid_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double strength_max_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double dumper_min_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double dumper_mid_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double dumper_max_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double tire_r_offset_for_ground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector prev_hit_location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> check_objects;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double camber_angle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double current_load;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector hit_location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector hit_normal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double stroke_offset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double arm_length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_camber_change_at_stroke;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_offset_change_at_stroke;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double stroke_offset_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double stroke_angle_coef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector tire_world_location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_check_joint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult joint_trace_hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> joint_ignore_actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> joint_ignore_actor_classs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> joint_check_objects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_contact_joint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double joint_hight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector point_speed_from_body;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double joint_hit_timer;
    
    USuspensionModelComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

