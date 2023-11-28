//
// Created by 黃漢軒 on 2023/11/22.
//

#include "ParkingSystem.hpp"
#include <stdexcept>

int ParkingSystem::FindVehicleIndexByPlateNumber(std::string plateNumber){
    for (size_t i = 0; i < vehicles.size(); ++i) {
        if (vehicles[i]->GetPlateNumber() == plateNumber) {
            return static_cast<int>(i);
        }
    }
    throw std::invalid_argument("Plate number not found");
}

int ParkingSystem::GetChargingFeeByPlateNumber(std::string plateNumber){
    int index = FindVehicleIndexByPlateNumber(plateNumber);
    return vehicles[index]->GetPrice();
}

ParkingSystem::ParkingSystem() {}

void ParkingSystem::AddVehicle(std::shared_ptr<Vehicle> vehicle) {
    for (size_t i = 0; i < vehicles.size(); ++i) {
        if (vehicles[i]->GetPlateNumber() == vehicle->GetPlateNumber()) {
            throw std::invalid_argument("Same plate number");
        }
    }
    vehicles.push_back(vehicle);
}

void ParkingSystem::RemoveVehicle(std::string plateNumber){
    for (size_t i = 0; i < vehicles.size(); ++i) {
        if (vehicles[i]->GetPlateNumber() == plateNumber) {
            vehicles.erase(vehicles.begin() + i);
            return;
        }
    }
    throw std::invalid_argument("Plate number doesn't exist");
}

int ParkingSystem::GetTotalParkingPricePerHour() {
    int totalPrice = 0;
    for (size_t i = 0; i < vehicles.size(); ++i) {
        if (vehicles[i]->GetType() == "Vehicle") {
            totalPrice += vehicles[i]->GetPrice();
        }
        else {
            std::shared_ptr<ElectricVehicle> electricVehicle = std::dynamic_pointer_cast<ElectricVehicle>(vehicles[i]);
            totalPrice += electricVehicle->GetPrice() + (electricVehicle->GetBatteryCapacity() - electricVehicle->GetCurrentPower()) * 5;
        }
    }
    return totalPrice;
}

int ParkingSystem::CalculateParkingPrice(std::string plateNumber, int hour){
    int totalPrice = GetChargingFeeByPlateNumber(plateNumber) * hour;
    int index = FindVehicleIndexByPlateNumber(plateNumber);
    if (vehicles[index]->GetType() == "Vehicle") {
        return totalPrice;
    }
    else {
        std::shared_ptr<ElectricVehicle> electricVehicle = std::dynamic_pointer_cast<ElectricVehicle>(vehicles[index]);
        totalPrice += (electricVehicle->GetBatteryCapacity() - electricVehicle->GetCurrentPower()) * 5;
        return totalPrice;
    }
}

int ParkingSystem::GetSize() {
    return static_cast<int>(vehicles.size());
}