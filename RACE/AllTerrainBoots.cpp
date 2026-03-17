#include "AllTerrainBoots.h"

allTerrainBoots::AllTerrainBoots::AllTerrainBoots() : GroundTransport("AllTerrainBoots", 6, 60) {}

double allTerrainBoots::AllTerrainBoots::restTime(int restCount)
{
    if (restCount == 1) return 10;
    return 5;
}
