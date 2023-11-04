// Implement the function of Bus here.

#include "Bus.hpp"

Bus::Bus(std::vector<std::string> stops, std::string routeName) : stops(stops), routeName(routeName) {}

void Bus::setStops(std::vector<std::string> stops) {
    this->stops = stops;
}

void Bus::setRouteName(std::string routeName) {
    this->routeName = routeName;
}

std::vector<std::string> Bus::GetStops() {
    return stops;
}

std::string Bus::GetRouteName() {
    return routeName;
}

unsigned short Bus::GetSpeedLimit() {
    return this->speedLimit;
}