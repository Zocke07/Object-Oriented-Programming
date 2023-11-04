// Implement the function of GasBus here.

#include "Bus.hpp"
#include "GasBus.hpp"

GasBus::GasBus(std::vector<std::string> stops, std::string routeName, unsigned int Gas) : Bus(stops, routeName),  gas(Gas) {}

unsigned int GasBus::GetGas() {
    return this->gas;
}

void GasBus::SetGas(unsigned int gas) {
    this->gas = gas;
}

unsigned int GasBus::GetPrice(int StopNumber) {
    if (StopNumber >= 0 && StopNumber <= 30) {
        return 450;
    } else {
        return 450 + (StopNumber - 30) * 5;
    }
}