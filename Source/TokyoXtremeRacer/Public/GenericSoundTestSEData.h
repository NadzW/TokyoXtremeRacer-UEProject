#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GenericSoundTestSEData.generated.h"

class UMetaSoundSource;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FGenericSoundTestSEData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMetaSoundSource> SoundSource;
    
    FGenericSoundTestSEData();
};

