#include "AirRace.h"

race::AirRace::AirRace(double distance) : Race(distance)
{}

bool race::AirRace::registerTransport(transport::Transport* t)
{
    if (participantCount >= 10)
        return false;

    if (t->getType() == transport::TransportType::Air)
    {
        participants[participantCount++] = t;
        return true;
    }

    return false;
}