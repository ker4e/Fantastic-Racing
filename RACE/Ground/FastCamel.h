#ifndef FASTCAMEL_H
#define FASTCAMEL_H

#include "GroundTransport.h"
#include "RaceAPI.h"

namespace fastCamel {
    class RACE_API FastCamel : public groundTransport::GroundTransport
    {
    public:
        FastCamel();

        double restTime(int restCount) override;
    };
}


#endif