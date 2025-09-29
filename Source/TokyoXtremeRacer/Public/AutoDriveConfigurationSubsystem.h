#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AutoDriveCrusingDefinitionParameter.h"
#include "EAutoDriveCrusingType.h"
#include "EBlockMethod.h"
#include "ERivalDriftPreference.h"
#include "ERivalOvertakeAbility.h"
#include "ERivalRandomLaneChange.h"
#include "ERivalSpecEffect.h"
#include "SRivalDrivingParameter.h"
#include "SRivalParameterDataTable.h"
#include "AutoDriveConfigurationSubsystem.generated.h"

class UAutoDriveConfigurationSubsystem;
class UAutoDriveCourseParameterData;
class UAutoDriveDriverParameterData;
class UBP_AINativeConfigParameter;
class UBP_AutoDriveDriverParameter;
class UBP_CourseParameter;
class UDataTable;
class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UAutoDriveConfigurationSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BlockMethodDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OvertakeAbilityTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RandomLaneChangeLateTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TorqueSpecEffectTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GripSpecEffectTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayEffectSpecEffectTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ReoverySPSpecEffectTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DriftPreferenceTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CrusingParameterTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RivalDrivingParameterTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalOvertakeAbility, float> OvertakeAbilityValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBlockMethod, float> BlockMethodValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalRandomLaneChange, float> RandomLaneChangeLateValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalSpecEffect, float> TorqueSpecEffectValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalSpecEffect, float> GripSpecEffectValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalSpecEffect, float> PlayEffectSpecEffectValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalSpecEffect, float> RecoverySPSpecEffectValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalDriftPreference, float> DriftPreferenceValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAutoDriveCrusingType, FAutoDriveCrusingDefinitionParameter> CrusingTypeValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSRivalDrivingParameter> RivalDrivingParameters;
    
public:
    UAutoDriveConfigurationSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSRivalDrivingParameter RivalDrivingParameter(const FName RivalID) const;
    
    UFUNCTION(BlueprintCallable)
    float ReturnTorqueSpecEffect(ERivalSpecEffect SpecRivalEffect);
    
    UFUNCTION(BlueprintCallable)
    float ReturnRecoverySPSpecEffect(ERivalSpecEffect SpecRivalEffect);
    
    UFUNCTION(BlueprintCallable)
    float ReturnRandomLaneChangeRate(ERivalRandomLaneChange RivalRandomLaneChange);
    
    UFUNCTION(BlueprintCallable)
    float ReturnPlayEffectSpecEffect(ERivalSpecEffect SpecRivalEffect);
    
    UFUNCTION(BlueprintCallable)
    float ReturnOvertakePredictSecond(ERivalOvertakeAbility RivalOvertakeAbility);
    
    UFUNCTION(BlueprintCallable)
    float ReturnGripSpecEffect(ERivalSpecEffect SpecRivalEffect);
    
    UFUNCTION(BlueprintCallable)
    float ReturnDriftPreference(ERivalDriftPreference DriftPreference);
    
    UFUNCTION(BlueprintCallable)
    FAutoDriveCrusingDefinitionParameter ReturnCrusingParameter(const EAutoDriveCrusingType CrusingType);
    
    UFUNCTION(BlueprintCallable)
    float ReturnBlockRate(EBlockMethod OvertakeMethod);
    
    UFUNCTION(BlueprintCallable)
    bool LoadRivalDrivingParameters(TSoftObjectPtr<UDataTable> RivalDrivingParameterDataTable);
    
    UFUNCTION(BlueprintCallable)
    void LoadDataTables(FSRivalParameterDataTable RivalParameterDataTable);
    
    UFUNCTION(BlueprintCallable)
    UBP_CourseParameter* LoadCourseParameter(UAutoDriveCourseParameterData* DataAsset, UObject* Outer);
    
    UFUNCTION(BlueprintCallable)
    UBP_AutoDriveDriverParameter* LoadAutoDriveDriverParameter(UAutoDriveDriverParameterData* DataAsset, UObject* Outer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadRivalDrivingParameterDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAutoDriveConfigurationSubsystem* GetAutoDriveConfigurationSubsystemWithContext(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    UBP_AINativeConfigParameter* ConvertToAINativeConfigurationParameter(UBP_CourseParameter* BPCourseParameter, UBP_AutoDriveDriverParameter* BPAutoDriveDriverParameter, UObject* Outer);
    
};

