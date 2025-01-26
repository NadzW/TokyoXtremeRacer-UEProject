#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EBGMType.h"
#include "EEngineSoundType.h"
#include "ESEType.h"
#include "SoundWorldSubsystem.generated.h"

class UObject;
class UPrimaryAssetLabel;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API USoundWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBGMType, UObject*> bgm_sound_data_map_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESEType, UObject*> se_sound_data_map_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEngineSoundType, UObject*> engine_sound_data_map_;
    
public:
    USoundWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    TArray<UObject*> GetExplicitObjectList(UPrimaryAssetLabel* Label);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetExplicitObject(UPrimaryAssetLabel* Label);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetExplicitNumObject(UPrimaryAssetLabel* Label, int32 get_num);
    
    UFUNCTION(BlueprintCallable)
    bool CheckSELoaded(ESEType se_type);
    
    UFUNCTION(BlueprintCallable)
    bool CheckEngineSoundLoaded(EEngineSoundType engine_sound_type);
    
    UFUNCTION(BlueprintCallable)
    bool CheckBgmLoaded(EBGMType bgm_type);
    
    UFUNCTION(BlueprintCallable)
    void AddSEMap(ESEType se_type, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void AddEngineSoundMap(EEngineSoundType engine_sound_type, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void AddBgmMap(EBGMType bgm_type, UObject* Object);
    
};

