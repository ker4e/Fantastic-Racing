#include "MixedRace.h"

race::MixedRace::MixedRace(double distance) : Race(distance)
{}

bool race::MixedRace::registerTransport(transport::Transport* t)
{
    if (participantCount >= 10)
        return false;

    participants[participantCount++] = t;
    return true;
}