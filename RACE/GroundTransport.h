#ifndef GROUNDTRANSPORT_H
#define GROUNDTRANSPORT_H

#include "Transport.h"
#include "RaceAPI.h"

namespace groundTransport
{
	class RACE_API GroundTransport : public transport::Transport
	{
	protected:
		double moveTime{};
	public:
		groundTransport::GroundTransport(std::string name, double speed, double moveTime)
			: Transport(name, speed, transport::TransportType::Ground), moveTime(moveTime)
		{}

		virtual double restTime(int restCount) = 0;
		double calculateTime(double distance) override;
	};
}

#endif