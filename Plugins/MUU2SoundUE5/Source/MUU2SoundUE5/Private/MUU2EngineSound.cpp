#include "MUU2EngineSound.h"
#include "UObject/NoExportTypes.h"

AMUU2EngineSound::AMUU2EngineSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInitOnBeginPlay = true;
    this->Player = 0;
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("EngineSoundAudioComponent"));
    this->ListenerSceneComponent = NULL;
    this->EmitterSceneComponent = NULL;
}

void AMUU2EngineSound::Stop() {
}

void AMUU2EngineSound::Start() {
}

void AMUU2EngineSound::SetVolumeMultiplier(const float VolumeMultiplier) {
}

void AMUU2EngineSound::SetSpeed(const float Value) {
}

void AMUU2EngineSound::SetShiftUp() {
}

void AMUU2EngineSound::SetShiftDown() {
}

void AMUU2EngineSound::SetRpm(const float Value) {
}

void AMUU2EngineSound::SetReverbLevel(const float ReverbLevel) {
}

void AMUU2EngineSound::SetListenerSceneComponent(USceneComponent* Listener) {
}

bool AMUU2EngineSound::SetEmitterSceneComponent(USceneComponent* InParent) {
    return false;
}

void AMUU2EngineSound::SetAccel(const float Value) {
}

int32 AMUU2EngineSound::MaxTuneEffects() {
    return 0;
}

int32 AMUU2EngineSound::MaxCarType() {
    return 0;
}

void AMUU2EngineSound::Load(const int32 CarType, const int32 TuneEffects, const float VTECrpm) {
}

void AMUU2EngineSound::Init() {
}

int32 AMUU2EngineSound::GetStatus() {
    return 0;
}

void AMUU2EngineSound::Finalize() {
}

void AMUU2EngineSound::FadeReverbLevel(const float TargetReverbLevel) {
}

float AMUU2EngineSound::ConvertRpmParam(const float MinRpm, const float MaxRpm, const float CurrentRpm) {
    return 0.0f;
}

double AMUU2EngineSound::ComputeDopplerEffect(const FVector ListenerPosition, const FVector PrevListenerPosition, const FVector EmitterPosition, const FVector PrevEmitterPosition, const double VelocityScaler) {
    return 0.0;
}


