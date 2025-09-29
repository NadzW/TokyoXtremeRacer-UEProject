#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PowerUnitModelInterface.h"
#include "PUModelIcuComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VEHICLEBEHAVIOR_API UPUModelIcuComponent : public UActorComponent, public IPowerUnitModelInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPUModelIcuShiftUpPre);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPUModelIcuShiftUp);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPUModelIcuShiftDownPre);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPUModelIcuShiftDown);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPUModelIcuInReverseGear);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPUModelIcuBlowOff, float, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPUModelIcuAfterFire);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPUModelIcuBlowOff OnBlowOff;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPUModelIcuAfterFire OnAfterFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPUModelIcuShiftDown OnShiftDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPUModelIcuShiftUp OnShiftUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPUModelIcuShiftDownPre OnShiftDownPre;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPUModelIcuShiftUpPre OnShiftUpPre;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPUModelIcuInReverseGear OnInReverseGear;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_torque;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_torque_coef_at_safemode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_omega;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_omega_inv;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double revlimit_omega;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double revlimit_omega_coef_at_safemode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double redzone_omega;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double idle_omega;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> torque_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_rotary_engine;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_boost_pressure;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_boost_pressure_coef_at_safemode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> torque_map2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double turbine_omega_rise_base_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double turbine_omega_damping_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double turbine_omega_to_pressure_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_turbine_omega;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double blow_off_call_pressure_diff;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double turbine_omega_rise_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_torque_omega_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_power_omega_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double current_boost_pressure;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double current_boost_pressure2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double target_boost_pressure;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double turbine_omega;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double afterfire_pool_min_omega_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double afterfire_need_pool;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double afterfire_next_need_pool;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double afterfire_damping_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool enable_afterfire;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double afterfire_pool;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_power;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double final_gear;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double reverse_gear;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> Gears;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 gear_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_auto_gear_change;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double gear_change_time;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double clutch_force;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double clutch_mu_k;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double clutch_mu_s;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double clutch_equivalent_net_radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double clutch_change_time;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double b_e;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double b_v;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double moi_pu;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double moi_c;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_auto_clutch;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double auto_gear_change_min_betwewn_time;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double gear_change_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double gear_moi_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double gear_moi_min;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double gear_down_rate_for_up_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double pu_brake_coef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool link_accele_gear_chage_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double transmission_effiency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double gear_down_rate_for_prev_gear_up_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 current_gear_position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 prev_gear_position;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double clutch_position;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double gear_change_timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 next_gear_position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool can_connect_clutch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 reserve_gear_position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool clutch_is_locked;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double pu_omega;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double vehicle_omega;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double pu_omega_old;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double vehicle_omega_old;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double auto_gear_change_timer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double current_pu_torque;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double current_clutch_transmission_torque;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double current_gear_transmission_torque;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double local_accele;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_gear_changing;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double torque_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double torque_coef2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double torque_coef3;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double pu_moi_coef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool clutch_off_for_sidebrake;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double gear_change_wait_timer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double gear_change_wait_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_started_engine;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double input_accele;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool at_change_is_lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool afterfire_fire_flag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> gear_up_omega_rates;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> gear_down_omega_rates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_spin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double pure_current_pu_torque;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double max_torque_coef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 valid_gear_position;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double spark_cut_timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool spark_cut_mode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double use_max_torque;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double use_revlimit_omega;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double use_max_boost_pressure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool als_enabled;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double als_boost_scale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double engine_torque_scale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double turbine_omega_drag_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double turbine_inertia;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double turbo_boost_k;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double turbo_comp_boost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool turbo_blow_off_active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool turbo_open_wg;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double turbo_wg_open_timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_idling;
    
    UPUModelIcuComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

