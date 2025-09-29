#include "VehicleRaceInfo.h"

UVehicleRaceInfo::UVehicleRaceInfo() {
    this->Level = 0;
    this->BaseSp = 0;
    this->MaxSp = 0;
    this->CurrentSp = 0.00f;
    this->SpAttack = 0;
    this->SPDiffence = 0;
    this->DistanceFromPlayer = 0.00f;
    this->BattleStatus = EDriverBattleStatus::None;
    this->DistanceSoFar = 0.00f;
    this->ExSp = 0;
    this->AttackDistanceOffset = 0;
    this->DamageDistanceOffset = 0;
    this->AttackIncreaseTime = 0;
    this->DamageReductionTime = 0;
    this->NumOfCollisionsAvoided = 0;
    this->MaxNumOfCollisionsAvoided = 0;
    this->TodayNumOfWin = 0;
    this->CollisionsAvoidedTimer = 0.00f;
    this->TakeDamage = false;
}

void UVehicleRaceInfo::Update(const double in_dt, bool& out_end_collision_avoided) {
}

void UVehicleRaceInfo::SetupBase(const int32 _level, const int32 max_sp, const double current_sp, const int32 sp_attack, const int32 sp_diffence, const double in_millage) {
}

void UVehicleRaceInfo::SetTodayNumOfWin(const int32 in_num) {
}

double UVehicleRaceInfo::SetSp(const double Sp) {
    return 0.0;
}

bool UVehicleRaceInfo::SetCollisionAvoidedTimer() {
    return false;
}

void UVehicleRaceInfo::SetBase(const int32 max_sp, const double current_sp, const int32 sp_attack, const int32 sp_diffence) {
}

void UVehicleRaceInfo::ResetBeforeEveryBattle(const bool in_is_continuous_battle) {
}

int32 UVehicleRaceInfo::RefrectSkillParameter(const FSSkillTree in_skill) {
    return 0;
}

bool UVehicleRaceInfo::IsCollisionsAvoided() {
    return false;
}

bool UVehicleRaceInfo::GetRecoveryValueOrg(const ESkillTarget in_target, int32& out_value) {
    return false;
}

bool UVehicleRaceInfo::GetRecoveryValue(const ESkillTarget in_target, double& out_value) {
    return false;
}

bool UVehicleRaceInfo::GetRecoveryRate(const ESkillTarget in_target, double& out_rate) {
    return false;
}

int32 UVehicleRaceInfo::GetMaxSp() const {
    return 0;
}

bool UVehicleRaceInfo::GetJudgementValue(const ESkillTarget in_target, int32& out_value) {
    return false;
}

double UVehicleRaceInfo::GetDefenseCoef(const double in_battle_time, bool& out_exe_time_bonus) const {
    return 0.0;
}

int32 UVehicleRaceInfo::GetDEF(const bool in_is_multiplayer_battle) {
    return 0;
}

double UVehicleRaceInfo::GetDamageDefenseCoef(const double in_battle_time, bool& out_find_coef) const {
    return 0.0;
}

double UVehicleRaceInfo::GetDamageAttackCoef(const double in_battle_time, bool& out_find_coef) const {
    return 0.0;
}

int32 UVehicleRaceInfo::GetConsumptionCoef(const ESkillTarget in_target, const ESkillTarget in_is_special_target, bool& out_base_skill, bool& out_special_skill) {
    return 0;
}

int32 UVehicleRaceInfo::GetCollisionCoefForSpecial(const ESkillTarget in_target, bool& out_use_skill) {
    return 0;
}

int32 UVehicleRaceInfo::GetCollisionCoef(const ESkillTarget in_target, bool& out_use_skill) {
    return 0;
}

FSBattleBaseInfo UVehicleRaceInfo::GetBattleBaseInfo(const bool in_is_pa_battle, const bool in_is_multiplayer_battle) {
    return FSBattleBaseInfo{};
}

int32 UVehicleRaceInfo::GetBaseCollisionCoef(const ESkillTarget in_target) {
    return 0;
}

double UVehicleRaceInfo::GetAttackCoef(const double in_battle_time, bool& out_exe_time_bonus) const {
    return 0.0;
}

int32 UVehicleRaceInfo::GetATK(const bool in_is_pa_battle) {
    return 0;
}

void UVehicleRaceInfo::ClearEquipSkills() {
}

double UVehicleRaceInfo::AddSp(const double Sp) {
    return 0.0;
}

void UVehicleRaceInfo::AddEquipSkills(const ESkillTreeType in_type, const int32 in_level) {
}


