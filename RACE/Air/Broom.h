#ifndef BROOM_H
#define BROOM_H

#include "AirTransport.h"
#include "RaceAPI.h"

namespace broom {
    class RACE_API Broom : public airTransport::AirTransport
    {
    public:
        Broom();

        double distanceReduction(double distance) override;
    };
}

#endif