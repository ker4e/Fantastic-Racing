#include "Eagle.h"

eagle::Eagle::Eagle() : AirTransport("Eagle", 8) {}

double eagle::Eagle::distanceReduction(double)
{
    return 0.06;
}
