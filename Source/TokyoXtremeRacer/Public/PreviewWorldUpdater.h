#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/PrimaryAssetId.h"
#include "SpawnMapCameraDelegate.h"
#include "Engine/World.h"
#include "PreviewWorldUpdater.generated.h"

class AMiniMapManagerActor;
class UActorComponent;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API APreviewWorldUpdater : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnMapCamera SpawnMiniMapCameraPown;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId preview_world_id_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_out_game_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* preview_world_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* player_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> rival_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* grave_marker_car_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMiniMapManagerActor* mini_map_manager_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* scene_capture_component_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* map_scene_capture_component_;
    
    APreviewWorldUpdater(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRival(const TArray<UObject*>& _rival);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayer(UObject* _player, bool is_north_up);
    
    UFUNCTION(BlueprintCallable)
    void SetGraveMarkerCar(UObject* _grave_marker_car);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetMapCameraPown();
    
};

