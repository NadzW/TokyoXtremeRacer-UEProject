#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBGMSceneForList.h"
#include "SMusicSelect.h"
#include "SOptionMusicSelectInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSOptionMusicSelectInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBGMSceneForList, FSMusicSelect> MusicSelectMap;
    
    FSOptionMusicSelectInfo();
};

