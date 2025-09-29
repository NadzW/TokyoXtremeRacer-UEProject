#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EEngineFromat.h"
#include "EEngineKind.h"
#include "SInternalMethodEngineData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSInternalMethodEngineData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CarId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CarNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FolderId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEngineKind EngineKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEngineFromat EngineFromat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EngineFormatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RevLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RedZoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Displacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRpm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPower_ps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPowerRpm;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxTorque_kg_m;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTorqueRpm;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxBoostNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TachoMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoostMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTurbo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm400;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm800;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm1200;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm1600;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm2000;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm2400;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm2800;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm3200;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm3600;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm4000;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm4400;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm4800;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm5200;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm5600;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm6000;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm6400;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm6800;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm7200;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm7600;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm8000;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm8400;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm8800;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm9200;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm9600;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm10000;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm10400;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm10800;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm11200;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm11600;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm12000;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm12400;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm12800;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm13200;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm13600;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rpm14000;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxTorqueCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VTECrpm;
    
    FSInternalMethodEngineData();
};

