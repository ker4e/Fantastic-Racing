#include "Centaur.h"

centaur::Centaur::Centaur() : GroundTransport("Centaur", 15, 8) {}

double centaur::Centaur::restTime(int)
{
    return 2;
}
