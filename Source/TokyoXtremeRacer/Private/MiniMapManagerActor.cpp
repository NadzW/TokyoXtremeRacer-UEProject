#include "MiniMapManagerActor.h"

AMiniMapManagerActor::AMiniMapManagerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AMiniMapManagerActor::UpdateRival_Implementation(const TArray<UObject*>& _rival) {
}

void AMiniMapManagerActor::UpdatePlayer_Implementation(UObject* _player) {
}

void AMiniMapManagerActor::UpdateGraveMarkerCar_Implementation(UObject* _grave_marker_car) {
}

bool AMiniMapManagerActor::SpawnMapCameraPown_Implementation() {
    return false;
}

void AMiniMapManagerActor::SetMiniMapIsNorthUp_Implementation(bool is_north_up) {
}

void AMiniMapManagerActor::SetMiniMapCameraDistance_Implementation(float Distance) {
}

void AMiniMapManagerActor::SetMapCameraHiddenBG_Implementation() {
}

void AMiniMapManagerActor::IsVisibleLineActor_Implementation(bool is_map) {
}

void AMiniMapManagerActor::IsHiddenLineActor_Implementation(bool is_map) {
}

UActorComponent* AMiniMapManagerActor::GetSceneCaptureComponent_Implementation() {
    return NULL;
}

float AMiniMapManagerActor::GetMiniMapCameraDistance_Implementation() {
    return 0.0f;
}

UActorComponent* AMiniMapManagerActor::GetMapSceneCaptureComponent_Implementation() {
    return NULL;
}

UObject* AMiniMapManagerActor::GetMapCameraPown_Implementation() {
    return NULL;
}


