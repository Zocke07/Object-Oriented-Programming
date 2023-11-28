//
// Created by 黃漢軒 on 2023/11/20.
//

#include <gtest/gtest.h>
#include <memory>
#include <stdexcept>

#include "Car.hpp"
#include "ElectricCar.hpp"
#include "ElectricMotorcycle.hpp"
#include "ElectricVehicle.hpp"
#include "Motorcycle.hpp"
#include "ParkingSystem.hpp"

// Add tests here

TEST(ParkingSystemTest, TestParkingCalculateParkingPriceShouldReturnCorrectIndexAndThrow) {
    ParkingSystem parkingSystemTest1;

    Car car("AAA-0001");
    ElectricCar electricCar(3, "AAA-0002");
    Motorcycle motorcycle("AAA-0003");
    ElectricMotorcycle electricMotorcycle(5, "AAA-0004");

    std::shared_ptr<Vehicle> aPointer = std::make_shared<Car>(car);
    parkingSystemTest1.AddVehicle(aPointer);
    aPointer = std::make_shared<ElectricCar>(electricCar);
    parkingSystemTest1.AddVehicle(aPointer);
    aPointer = std::make_shared<Motorcycle>(motorcycle);
    parkingSystemTest1.AddVehicle(aPointer);
    aPointer = std::make_shared<ElectricMotorcycle>(electricMotorcycle);
    parkingSystemTest1.AddVehicle(aPointer);

    ASSERT_EQ(parkingSystemTest1.GetSize(), 4);
    ASSERT_EQ(parkingSystemTest1.CalculateParkingPrice("AAA-0001", 2), 80);
    ASSERT_EQ(parkingSystemTest1.CalculateParkingPrice("AAA-0004", 3), 100);
    ASSERT_THROW(parkingSystemTest1.CalculateParkingPrice("AAA-0005", 2), std::invalid_argument);
    ASSERT_THROW(parkingSystemTest1.CalculateParkingPrice("AAA-0010", 2), std::invalid_argument);
}

TEST(ParkingSystemTest, TestParkingGetTotalPArkingPricePerHourShouldReturnCorrectPrice) {
    ParkingSystem parkingSystemTest2;

    Car car("AAA-0001");
    ElectricCar electricCar(3, "AAA-0002");
    Motorcycle motorcycle("AAA-0003");
    ElectricMotorcycle electricMotorcycle(5, "AAA-0004");

    electricMotorcycle.SetBatteryCapacity(8);
    std::shared_ptr<Vehicle> aPointer = std::make_shared<Car>(car);
    parkingSystemTest2.AddVehicle(aPointer);
    aPointer = std::make_shared<ElectricCar>(electricCar);
    parkingSystemTest2.AddVehicle(aPointer);
    aPointer = std::make_shared<Motorcycle>(motorcycle);
    parkingSystemTest2.AddVehicle(aPointer);
    aPointer = std::make_shared<ElectricMotorcycle>(electricMotorcycle);
    parkingSystemTest2.AddVehicle(aPointer);

    ASSERT_EQ(parkingSystemTest2.GetTotalParkingPricePerHour(), 180);
 }

 TEST(ParkingSystemTest, TestParkingAddDuplicateVehicleShouldReturnThrow) {
    ParkingSystem parkingSystemTest3;

    Car car("AAA-0001");
    ElectricCar electricCar(3, "AAA-0002");
    Motorcycle motorcycle("AAA-0003");
    ElectricMotorcycle electricMotorcycle(5, "AAA-0004");

    std::shared_ptr<Vehicle> aPointer = std::make_shared<Car>(car);
    parkingSystemTest3.AddVehicle(aPointer);
    aPointer = std::make_shared<ElectricCar>(electricCar);
    parkingSystemTest3.AddVehicle(aPointer);
    aPointer = std::make_shared<Motorcycle>(motorcycle);
    parkingSystemTest3.AddVehicle(aPointer);
    aPointer = std::make_shared<ElectricMotorcycle>(electricMotorcycle);
    parkingSystemTest3.AddVehicle(aPointer);

    ASSERT_THROW(parkingSystemTest3.AddVehicle(aPointer), std::invalid_argument);
 }

  TEST(ParkingSystemTest, TestParkingRemoveNonExistentVehicleShouldReturnThrow) {
    ParkingSystem parkingSystemTest4;

    Car car("AAA-0001");
    ElectricCar electricCar(3, "AAA-0002");
    Motorcycle motorcycle("AAA-0003");
    ElectricMotorcycle electricMotorcycle(5, "AAA-0004");

    std::shared_ptr<Vehicle> aPointer = std::make_shared<Car>(car);
    parkingSystemTest4.AddVehicle(aPointer);
    aPointer = std::make_shared<ElectricCar>(electricCar);
    parkingSystemTest4.AddVehicle(aPointer);
    aPointer = std::make_shared<Motorcycle>(motorcycle);
    parkingSystemTest4.AddVehicle(aPointer);
    aPointer = std::make_shared<ElectricMotorcycle>(electricMotorcycle);
    parkingSystemTest4.AddVehicle(aPointer);
    parkingSystemTest4.RemoveVehicle("AAA-0004");

    ASSERT_THROW(parkingSystemTest4.RemoveVehicle("AAA-0004"), std::invalid_argument);
    ASSERT_THROW(parkingSystemTest4.RemoveVehicle("AAA-0010"), std::invalid_argument);
 }
