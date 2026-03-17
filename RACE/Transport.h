#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>
#include "RaceAPI.h"

namespace transport
{
    enum class TransportType
    {
        Ground,
        Air
    };

    class RACE_API Transport
    {
    protected:
        std::string nameTransport{};
        double speedTransport{};
        TransportType type;

    public:
        Transport(std::string name, double speed, TransportType type);

        virtual double calculateTime(double distance) = 0;

        std::string getName() const;
        TransportType getType() const;
    };
}

#endif