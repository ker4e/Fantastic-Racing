#ifndef CENTAUR_H
#define CENTAUR_H

#include "GroundTransport.h"
#include "RaceAPI.h"

namespace centaur {
    class RACE_API Centaur : public groundTransport::GroundTransport
    {
    public:
        Centaur();

        double restTime(int restCount) override;
    };
}


#endif