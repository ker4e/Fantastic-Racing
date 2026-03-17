#ifndef AIRRACE_H
#define AIRRACE_H

#include "MainRace.h"
#include "RaceAPI.h"

namespace race
{
    class RACE_API AirRace : public Race
    {
    public:
        AirRace(double distance);

        bool registerTransport(transport::Transport* t) override;
    };
}

#endif