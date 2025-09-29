#pragma once
#include "CoreMinimal.h"
#include "SSoundbaseInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSoundbaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pitch;
    
    METASOUNDACCESSOR_API FSSoundbaseInfo();
};

