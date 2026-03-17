#include "AirTransport.h"

double airTransport::AirTransport::calculateTime(double distance)
{
    double reduced = distance * (1 - distanceReduction(distance));
    return reduced / speedTransport;
}
