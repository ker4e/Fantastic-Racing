#ifndef CAMEL_H
#define CAMEL_H

#include "GroundTransport.h"
#include "RaceAPI.h"

namespace camel
{
    class RACE_API Camel : public groundTransport::GroundTransport
    {
    public:
        Camel();

        double restTime(int restCount) override;
    };
}

#endif