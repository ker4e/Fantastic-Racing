#include "FastCamel.h"

fastCamel::FastCamel::FastCamel () : GroundTransport("FastCamel", 40, 10) {}

double fastCamel::FastCamel::restTime(int restCount)
{
    if (restCount == 1) return 5;
    if (restCount == 2) return 6.5;
    return 8;
}
