#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "SCornerInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCornerInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CornerStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CornerStartName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CornerEndDistace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CornerEndName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CornerR;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CornerLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MergeTargetCornerStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartOutsideLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndOutsideLocation;
    
    FSCornerInfo();
};

