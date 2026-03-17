#ifndef EAGLE_H
#define EAGLE_H

#include "AirTransport.h"
#include "RaceAPI.h"

namespace eagle 
{
    class RACE_API Eagle : public airTransport::AirTransport
    {
    public:
        Eagle();

        double distanceReduction(double distance) override;
    };
}

#endif
