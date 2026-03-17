#ifndef TRANSPORT_FACTORY_H
#define TRANSPORT_FACTORY_H

#include "Transport.h"
#include "Camel.h"
#include "FastCamel.h"
#include "Centaur.h"
#include "AllTerrainBoots.h"
#include "MagicCarpet.h"
#include "Eagle.h"
#include "Broom.h"
#include "RaceAPI.h"

namespace Factory 
{
const int TOTAL_TRANSPORTS = 7;

RACE_API transport::Transport** createTransportArray();
RACE_API void  deleteTransportArray(transport::Transport** arr);
}

#endif 