#ifndef MAGICCARPET_H
#define MAGICCARPET_H

#include "AirTransport.h"
#include "RaceAPI.h"

namespace magicCarpet 
{
    class RACE_API MagicCarpet : public airTransport::AirTransport
    {
    public:
        MagicCarpet();

        double distanceReduction(double distance) override;
    };
}

#endif