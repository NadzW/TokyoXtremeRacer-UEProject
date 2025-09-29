#include "VechicleCore.h"
#include "UObject/NoExportTypes.h"
#include "PUModelIcuComponent.h"
#include "SuspensionModelComponent.h"
#include "TireModelComponent.h"

AVechicleCore::AVechicleCore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoreBody"));
    this->CoreBody = (UStaticMeshComponent*)RootComponent;
    this->SuspensionFrontLeft = CreateDefaultSubobject<USuspensionModelComponent>(TEXT("SuspensionFrontLeft"));
    this->TireFrontLeft = CreateDefaultSubobject<UTireModelComponent>(TEXT("TireFrontLeft"));
    this->SuspensionJointSocketFrontLeft = TEXT("Wheel_Front_Left");
    this->SuspensionFrontRight = CreateDefaultSubobject<USuspensionModelComponent>(TEXT("SuspensionFrontRight"));
    this->TireFrontRight = CreateDefaultSubobject<UTireModelComponent>(TEXT("TireFrontRight"));
    this->SuspensionJointSocketFrontRight = TEXT("Wheel_Front_Right");
    this->SuspensionRearLeft = CreateDefaultSubobject<USuspensionModelComponent>(TEXT("SuspensionRearLeft"));
    this->TireRearLeft = CreateDefaultSubobject<UTireModelComponent>(TEXT("TireRearLeft"));
    this->SuspensionJointSocketRearLeft = TEXT("Wheel_Rear_Left");
    this->SuspensionRearRight = CreateDefaultSubobject<USuspensionModelComponent>(TEXT("SuspensionRearRight"));
    this->TireRearRight = CreateDefaultSubobject<UTireModelComponent>(TEXT("TireRearRight"));
    this->SuspensionJointSocketRearRight = TEXT("Wheel_Rear_Right");
    this->PowerUnit = CreateDefaultSubobject<UPUModelIcuComponent>(TEXT("PowerUnit"));
    this->SuspensionFrontLeft->SetupAttachment(RootComponent);
    this->SuspensionFrontRight->SetupAttachment(RootComponent);
    this->SuspensionRearLeft->SetupAttachment(RootComponent);
    this->SuspensionRearRight->SetupAttachment(RootComponent);
    this->TireFrontLeft->SetupAttachment(SuspensionFrontLeft);
    this->TireFrontRight->SetupAttachment(SuspensionFrontRight);
    this->TireRearLeft->SetupAttachment(SuspensionRearLeft);
    this->TireRearRight->SetupAttachment(SuspensionRearRight);
}


