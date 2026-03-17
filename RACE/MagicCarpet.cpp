#include "MagicCarpet.h"

magicCarpet::MagicCarpet::MagicCarpet() : AirTransport("MagicCarpet", 10) {}

double magicCarpet::MagicCarpet::distanceReduction(double distance)
{
    if (distance < 1000) return 0;
    if (distance < 5000) return 0.03;
    if (distance < 10000) return 0.1;
    return 0.05;
}
