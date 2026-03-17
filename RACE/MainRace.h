#ifndef MAINRACE_H
#define MAINRACE_H

#include <string>
#include "Transport.h"
#include "RaceAPI.h"

namespace race
{
    struct RACE_API Result
    {
        std::string name;
        double time;
    };

    class RACE_API Race
    {
    protected:
        double distance{};
        transport::Transport* participants[10];
        int participantCount{};

    public:
        Race(double distance);

        virtual bool registerTransport(transport::Transport* t) = 0;

        int startRace(Result results[]);
    };
}

#endif