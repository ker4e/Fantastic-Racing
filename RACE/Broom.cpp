#include "Broom.h"

broom::Broom::Broom() : AirTransport("Broom", 20) {}

double broom::Broom::distanceReduction(double distance)
{
    int thousands{ static_cast<int>(distance / 1000) };
    return thousands * 0.01;
}
