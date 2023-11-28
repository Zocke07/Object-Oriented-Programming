//
// Created by 黃漢軒 on 2023/11/20.
//
#include <gtest/gtest.h>

#include "ElectricCar.hpp"

TEST(ElectricCarTest, TestElectricCarPowerAndNumberPlateConstructorShouldSetupCorrectValue) {
    ElectricCar electricCarTest1(5, "AAA-BBBB");

    ASSERT_EQ(electricCarTest1.GetPlateNumber(), "AAA-BBBB");
    ASSERT_EQ(electricCarTest1.GetBatteryCapacity(), 10);
    ASSERT_EQ(electricCarTest1.GetCurrentPower(), 5);
}

TEST(ElectricCarTest, TestElectricCarPowerConstructorShouldSetupCorrectValue) {
    ElectricCar electricCarTest2(8);
    std::string randomizedPlateNumber = electricCarTest2.GetPlateNumber();
    ASSERT_EQ(electricCarTest2.GetPlateNumber(), randomizedPlateNumber);
    ASSERT_EQ(electricCarTest2.GetBatteryCapacity(), 10);
    ASSERT_EQ(electricCarTest2.GetCurrentPower(), 8);
}

TEST(ElectricCarTest, TestElectricCarNoArgumentConstructorShouldSetupCorrectValue) {
    ElectricCar electricCarTest3;
    std::string randomizedPlateNumber = electricCarTest3.GetPlateNumber();
    ASSERT_EQ(electricCarTest3.GetPlateNumber(), randomizedPlateNumber);
    ASSERT_EQ(electricCarTest3.GetBatteryCapacity(), 10);
}

TEST(ElectricCarTest, TestElectricCarGetVehicleNameShouldReturnElectricCar) {
    ElectricCar electricCarTest4;

    ASSERT_EQ(electricCarTest4.GetVehicleName(), "ElectricCar");
}

TEST(ElectricCarTest, TestElectricCarGetPriceShouldReturnCorrectValue) {
    ElectricCar electricCarTest5;

    ASSERT_EQ(electricCarTest5.GetPrice(), 40);
}

// Add more tests