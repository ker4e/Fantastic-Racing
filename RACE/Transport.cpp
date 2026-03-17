#include "Transport.h"

transport::Transport::Transport(std::string name, double speed, TransportType type)
{
    nameTransport = name;
    speedTransport = speed;
    this->type = type;
}

transport::TransportType transport::Transport::getType() const
{
    return type;
}

std::string transport::Transport::getName() const
{
    return nameTransport;
}