#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECourseOpenArea.h"
#include "ERPDZoneAttribute.h"
#include "BPFL_GameCoursePathUtility.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_GameCoursePathUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_GameCoursePathUtility();

    UFUNCTION(BlueprintCallable)
    static void ReturnAcceptableZoneFromECourseOpenArea(TSet<ERPDZoneAttribute>& AcceptZones, const ECourseOpenArea OpenArea);
    
};

