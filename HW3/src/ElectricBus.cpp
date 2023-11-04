// Implement the function of ElectricBus here.

#include "Bus.hpp"
#include "ElectricBus.hpp"
#include <stdexcept>

ElectricBus::ElectricBus(std::vector<std::string> stops, std::string routeName, unsigned short electricityPercentage) : Bus(stops, routeName) {
    if (electricityPercentage >= 0 && electricityPercentage <= 100) {
        this->electricityPercentage = electricityPercentage;
    } else {
        throw std::invalid_argument("Invalid argument"); 
    }
}

unsigned short ElectricBus::GetElectricityPercentage() {
    return this->electricityPercentage;
}

void ElectricBus::SetElectricityPercentage(unsigned short electricity) {
    if (electricity >= 0 && electricity <= 100) {
        this->electricityPercentage = electricity;
    } else {
        throw std::invalid_argument("Invalid argument"); 
    }
}

unsigned int ElectricBus::GetPrice(int stopNumber) {
    if (stopNumber >= 0 && stopNumber <= 20) {
        return 150;
    } else {
        return 150 + (stopNumber - 20) * 10;
    }
}