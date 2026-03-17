#ifndef	ALLTERRAINBOOTS_H
#define ALLTERRAINBOOTS_H

#include "GroundTransport.h"
#include "RaceAPI.h"

namespace allTerrainBoots 
{
    class RACE_API AllTerrainBoots : public groundTransport::GroundTransport
    {
    public:
        AllTerrainBoots();

        double restTime(int restCount) override;
    };
}

#endif