#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSoundbaseInfo.h"
#include "BPFLMetasoundAccessor.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class UBPFLMetasoundAccessor : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFLMetasoundAccessor();

    UFUNCTION(BlueprintCallable)
    static FSSoundbaseInfo GetSoundBaseInfo(USoundBase* SoundBase);
    
};

