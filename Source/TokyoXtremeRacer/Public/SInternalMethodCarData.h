#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBodyType.h"
#include "ECarCenterDiff.h"
#include "ECarFrontRearDiff.h"
#include "ECarIceAspirationType.h"
#include "EDriveType.h"
#include "EEngineFromat.h"
#include "EEngineKind.h"
#include "EFSuspension.h"
#include "ERSuspension.h"
#include "SInternalMethodCarData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSInternalMethodCarData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CarId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CarNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ModelNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FolderId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReleaseDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyType BodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroundCearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Wheelbase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FTread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RTread;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CenterOfGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriveType DriveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEngineKind EngineKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEngineFromat EngineFromat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarIceAspirationType EngineInspiration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 displacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPowerRpm;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxTorque;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTorqueRpm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FTireWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FTireOblateness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FTireInch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RTireWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RTireOblateness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RTireInch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GearNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Gear1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Gear2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Gear3;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Gear4;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Gear5;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Gear6;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Gear7;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Gear8;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Gear9;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Gear10;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GearFinal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BackGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSuspension FSuspension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSuspension RSuspension;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Cd;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Cl;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RearDriveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EngineFormatName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double front_spring_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double rear_spring_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double front_damper_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double rear_damper_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double front_tire_grip;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double rear_tire_grip;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double front_tire_side_grip;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double rear_tire_side_grip;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double front_brake_scale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double rear_brake_scale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double front_brake_angle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double rear_brake_angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool front_is_drum_brake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool rear_is_drum_brake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FTireInchMinus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FTireInchPlus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RTireInchMinus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RTireInchPlus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CarName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BrakeStopDistanceOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BrakeForceFrontCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrontHightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RearHightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrontCamberAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RearCamberAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrontOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RearOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrontTirePulling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RearTirePulling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarCenterDiff CenterDiffType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarFrontRearDiff FrontDiffType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarFrontRearDiff RearDiffType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RHLOpenAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxHightOffset;
    
    FSInternalMethodCarData();
};

