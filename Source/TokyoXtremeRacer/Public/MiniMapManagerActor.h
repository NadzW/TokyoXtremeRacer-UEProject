#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MiniMapManagerActor.generated.h"

class UActorComponent;
class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API AMiniMapManagerActor : public AActor {
    GENERATED_BODY()
public:
    AMiniMapManagerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateRival(const TArray<UObject*>& _rival);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePlayer(UObject* _player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateGraveMarkerCar(UObject* _grave_marker_car);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SpawnMapCameraPown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMiniMapIsNorthUp(bool is_north_up);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMiniMapCameraDistance(float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMapCameraHiddenBG();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IsVisibleLineActor(bool is_map);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IsHiddenLineActor(bool is_map);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UActorComponent* GetSceneCaptureComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMiniMapCameraDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UActorComponent* GetMapSceneCaptureComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* GetMapCameraPown();
    
};

