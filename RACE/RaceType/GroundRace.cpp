#include "GroundRace.h"

race::GroundRace::GroundRace(double distance) : Race(distance)
{}

bool race::GroundRace::registerTransport(transport::Transport* t)
{
    if (participantCount >= 10)
        return false;

    if (t->getType() == transport::TransportType::Ground)
    {
        participants[participantCount++] = t;
        return true;
    }

    return false;
}