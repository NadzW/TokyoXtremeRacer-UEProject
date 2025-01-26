#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EVersion.h"
#include "SControllerSetting.h"
#include "SSBVersion.h"
#include "GameInfoGameInstanceSubsystem.generated.h"

class ULicensePlateGenerator;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UGameInfoGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVersion Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBVersion SBVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULicensePlateGenerator* LicensePlateGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSControllerSetting ControllerSetting;
    
    UGameInfoGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    EVersion GetVersion(FName& out_number);
    
    UFUNCTION(BlueprintCallable)
    FSSBVersion GetSBVersion();
    
};

