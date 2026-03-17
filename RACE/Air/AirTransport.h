#ifndef AIRTRANSPORT_H
#define AIRTRANSPORT_H

#include "Transport.h"
#include "RaceAPI.h"

namespace airTransport
{
	class RACE_API AirTransport : public transport::Transport
	{
	public:
		AirTransport(std::string name, double speed)
			: Transport(name, speed, transport::TransportType::Air)
		{}

		virtual double distanceReduction(double distance) = 0;
		double calculateTime(double distance) override;
	};
}

#endif