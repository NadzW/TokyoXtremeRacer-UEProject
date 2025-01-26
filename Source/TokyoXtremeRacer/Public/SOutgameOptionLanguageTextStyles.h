#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EOP_Language.h"
#include "SOutgameOptionLanguageTextStyles.generated.h"

class UCommonTextStyle;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSOutgameOptionLanguageTextStyles : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOP_Language LanguageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonTextStyle> ButtonTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonTextStyle> PullDownTextStyle;
    
    FSOutgameOptionLanguageTextStyles();
};

