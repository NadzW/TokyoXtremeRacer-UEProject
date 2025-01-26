#pragma once
#include "CoreMinimal.h"
#include "ECarSetting.h"
#include "ECarTireType.h"
#include "ECustomCarPartsKind.h"
#include "ECustomCarPartsSimpleKind.h"
#include "ENeonLightPositionType.h"
#include "EVehicleTuneKind.h"
#include "EWindowStickerIndex.h"
#include "SBrakeInfo.h"
#include "SCarLicensePlate.h"
#include "SCarPaint.h"
#include "SCarSettingInfo.h"
#include "SCarTireInfo.h"
#include "SCustomCarParts.h"
#include "SMyCarBodySticker.h"
#include "SMyCarNeon.h"
#include "SMyCarWindowSticker.h"
#include "STuneInfo.h"
#include "SWheelInfo.h"
#include "SMyCarInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSMyCarInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CarNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EngineNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReplacedEngine;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Mileages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVehicleTuneKind, FSTuneInfo> TuneInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCarSettingInfo SettingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECarSetting> NewSettingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECarSetting> AlreadyNewSettingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCarPaint Paint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECustomCarPartsKind, FSCustomCarParts> DressUpInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECustomCarPartsSimpleKind> NewDressUpInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECustomCarPartsSimpleKind> AlreadyNewDressUpInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCarTireInfo FrontTire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCarTireInfo RearTire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarTireType FrontTireType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarTireType RearTireType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSWheelInfo FrontWheelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSWheelInfo RearWheelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HaveWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBrakeInfo FrontBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBrakeInfo RearBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HaveBrakes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HaveRearBrakes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCarLicensePlate LicensePlate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCourseEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWindowStickerIndex, FSMyCarWindowSticker> WindowStickers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSMyCarBodySticker> BodyStickers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSMyCarBodySticker> RearWingStickers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENeonLightPositionType, FSMyCarNeon> Neons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ENeonLightPositionType> HaveNeons;
    
    FSMyCarInfo();
};

