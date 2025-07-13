#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EParkingArea.h"
#include "ERunArea.h"
#include "MapNameAndInt.h"
#include "RivalMemberFilter.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API URivalMemberFilter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERunArea, FMapNameAndInt> run_area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EParkingArea, FMapNameAndInt> parking_area;
    
    URivalMemberFilter();

    UFUNCTION(BlueprintCallable)
    bool IsEnableTeam(const FName& team_name, const TMap<ERunArea, bool>& course_flag, const TMap<EParkingArea, bool>& pa_flag);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnableTeamCountByParking(const EParkingArea& Area);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnableTeamCountByCourse(const ERunArea& Area);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnableTeamCount(const TMap<ERunArea, bool>& course_flag, const TMap<EParkingArea, bool>& pa_flag);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAllTeamCount();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable)
    void CheckPACountUp(const EParkingArea& Area, const FName& team_name);
    
    UFUNCTION(BlueprintCallable)
    void CheckDoubleCountUp(const ERunArea& course_area, const EParkingArea& pa_area, const FName& team_name);
    
    UFUNCTION(BlueprintCallable)
    void CheckCourseCountUp(const ERunArea& Area, const FName& team_name);
    
};

