//
// Created by 黃漢軒 on 2023/11/20.
//
#include <gtest/gtest.h>

#include "ElectricMotorcycle.hpp"
#include "ElectricVehicle.hpp"

TEST(ElectricMotorcycleTest, TestElectricMotorcyclePowerAndNumberPlateConstructorShouldSetupCorrectValue) {
    ElectricMotorcycle ElectricMotorcycleTest1(5, "AAA-BBBB");

    ASSERT_EQ(ElectricMotorcycleTest1.GetPlateNumber(), "AAA-BBBB");
    ASSERT_EQ(ElectricMotorcycleTest1.GetBatteryCapacity(), 10);
    ASSERT_EQ(ElectricMotorcycleTest1.GetCurrentPower(), 5);
}

TEST(ElectricMotorcycleTest, TestElectricMotorcyclePowerConstructorShouldSetupCorrectValue) {
    ElectricMotorcycle ElectricMotorcycleTest2(8);
    std::string randomizedPlateNumber = ElectricMotorcycleTest2.GetPlateNumber();
    ASSERT_EQ(ElectricMotorcycleTest2.GetPlateNumber(), randomizedPlateNumber);
    ASSERT_EQ(ElectricMotorcycleTest2.GetBatteryCapacity(), 10);
    ASSERT_EQ(ElectricMotorcycleTest2.GetCurrentPower(), 8);
}

TEST(ElectricMotorcycleTest, TestElectricMotorcycleWithoutArgumentConstructorShouldSetupCorrectValue) {
    ElectricMotorcycle ElectricMotorcycleTest3;
    std::string randomizedPlateNumber = ElectricMotorcycleTest3.GetPlateNumber();
    ASSERT_EQ(ElectricMotorcycleTest3.GetPlateNumber(), randomizedPlateNumber);
    ASSERT_EQ(ElectricMotorcycleTest3.GetBatteryCapacity(), 10);
}

TEST(ElectricMotorcycleTest, TestElectricMotorcycleGetVehicleNameShouldReturnElectricMotorcycle) {
    ElectricMotorcycle ElectricMotorcycleTest4;

    ASSERT_EQ(ElectricMotorcycleTest4.GetVehicleName(), "ElectricMotorcycle");
}

TEST(ElectricMotorcycleTest, TestElectricMotorcycleGetPriceShouldReturnCorrectValue) {
    ElectricMotorcycle ElectricMotorcycleTest5;

    ASSERT_EQ(ElectricMotorcycleTest5.GetPrice(), 25);
}

// Add more tests