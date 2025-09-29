#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBGMType.h"
#include "ESEType.h"
#include "OutgameSoundWorldSubsystem.generated.h"

class UObject;
class UPrimaryAssetLabel;
class USoundSubsystemHelperBase;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UOutgameSoundWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundSubsystemHelperBase* sound_helper_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBGMType, UObject*> bgm_sound_data_map_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESEType, UObject*> se_sound_data_map_;
    
public:
    UOutgameSoundWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    UObject* GetExplicitObject(UPrimaryAssetLabel* Label);
    
};

