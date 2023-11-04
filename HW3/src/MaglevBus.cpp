// Implement the function of MaglevBus here.

#include "Bus.hpp"
#include "MaglevBus.hpp"
#include <stdexcept>

MaglevBus::MaglevBus(std::vector<std::string> stops, std::string routeName, unsigned short electricityPercentage) : Bus(stops, routeName){
    if (electricityPercentage >= 0 && electricityPercentage <= 100) {
        this->electricityPercentage = electricityPercentage;
    } else {
        throw std::invalid_argument("Invalid argument");
    }
}

unsigned short MaglevBus::GetElectricityPercentage() {
    return this->electricityPercentage;
}

void MaglevBus::SetElectricityPercentage(unsigned short electricity) {
    if (electricity >= 0 && electricity <= 100) {
        this->electricityPercentage = electricity;
    } else {
        throw std::invalid_argument("Invalid argument");
    }
}

unsigned int MaglevBus::GetPrice(int stopNumber) {
    if (stopNumber >= 0 && stopNumber <= 10) {
        return 750;
    } else {
        return 750 + (stopNumber - 10) * 15;
    }
}

unsigned short MaglevBus::GetSpeedLimit() {
    return this->speedLimit;
}