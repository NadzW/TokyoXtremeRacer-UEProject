#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECourseOpenArea.h"
#include "ERPDZoneAttribute.h"
#include "ERunArea.h"
#include "BPFL_GameCoursePathUtility.generated.h"

class URoadPointAreaContainer;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_GameCoursePathUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_GameCoursePathUtility();

    UFUNCTION(BlueprintCallable)
    static void ReturnAcceptableZoneFromECourseOpenArea(TSet<ERPDZoneAttribute>& AcceptZones, const ECourseOpenArea OpenArea);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetZoneIndicesFromRunArea(const ERunArea Area, const TMap<ERunArea, URoadPointAreaContainer*>& RPADatas);
    
    UFUNCTION(BlueprintCallable)
    static ERunArea GetRunAreaFromZone(const TMap<ERunArea, URoadPointAreaContainer*>& RPADatas, ERPDZoneAttribute Zone);
    
};

