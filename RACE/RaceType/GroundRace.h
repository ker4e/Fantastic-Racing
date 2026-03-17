#ifndef GROUNDRACE_H
#define GROUNDRACE_H

#include "MainRace.h"
#include "RaceAPI.h"

namespace race
{
    class RACE_API GroundRace : public Race
    {
    public:
        GroundRace(double distance);

        bool registerTransport(transport::Transport* t) override;
    };
}

#endif