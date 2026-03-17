#include "Camel.h"

camel::Camel::Camel() : GroundTransport("Camel", 10, 30) {}

double camel::Camel::restTime(int restCount)
{
    if (restCount == 1) return 5;
    return 8;
}
