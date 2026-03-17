#include "GroundTransport.h"

double groundTransport::GroundTransport::calculateTime(double distance)
{
    double travelTime = distance / speedTransport;

    int rests{ static_cast<int>(travelTime / moveTime) };

    if (travelTime == rests * moveTime)
        rests--;

    double totalRest = 0;

    for (int i = 1; i <= rests; i++)
        totalRest += restTime(i);

    return travelTime + totalRest;
}
