#include "RoadPoint.h"

FRoadPoint::FRoadPoint() {
    this->lane = 0;
    this->Info = ERPDInfoAttribute::RPDIA_None;
    this->Enemy = ERPDEnemyAttribute::RPDENA_None;
    this->Exit = ERPDExitAttribute::RPDEXA_None;
    this->Zone = ERPDZoneAttribute::RPDZA_None;
    this->CreaseWeight = ERPDCreaseWeightAttribute::RPDCWA_Asphalt;
    this->NoBattle = ERPDNoBattleAttribute::RPDNBA_None;
    this->Tunnel = 0;
}

