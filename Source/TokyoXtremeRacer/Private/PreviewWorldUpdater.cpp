#include "PreviewWorldUpdater.h"

APreviewWorldUpdater::APreviewWorldUpdater(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->is_out_game_ = false;
    this->preview_world_ = NULL;
    this->player_ = NULL;
    this->grave_marker_car_ = NULL;
    this->mini_map_manager_ = NULL;
    this->scene_capture_component_ = NULL;
    this->map_scene_capture_component_ = NULL;
}

void APreviewWorldUpdater::SetRival(const TArray<UObject*>& _rival) {
}

void APreviewWorldUpdater::SetPlayer(UObject* _player, bool is_north_up) {
}

void APreviewWorldUpdater::SetGraveMarkerCar(UObject* _grave_marker_car) {
}

UObject* APreviewWorldUpdater::GetMapCameraPown() {
    return NULL;
}


