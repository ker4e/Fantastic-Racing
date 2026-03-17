#ifndef MIXEDRACE_H
#define MIXEDRACE_H

#include "MainRace.h"
#include "RaceAPI.h"

namespace race
{
    class RACE_API MixedRace : public Race
    {
    public:
        MixedRace(double distance);

        bool registerTransport(transport::Transport* t) override;
    };
}

#endif