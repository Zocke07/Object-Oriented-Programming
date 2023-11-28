//
// Created by 黃漢軒 on 2023/11/20.
//

#include <gtest/gtest.h>

#include "Motorcycle.hpp"

TEST(MotorcycleTest, TestMotorcycleWithPlateNumberConstructorShouldSetupCorrectValue) {
    Motorcycle motorcycleTest1("AAA-BBBB");

    ASSERT_EQ(motorcycleTest1.GetPlateNumber(), "AAA-BBBB");
}

TEST(MotorcycleTest, TestMotorcycleWitouthPlateNumberConstructorShouldSetupCorrectValue) {
    Motorcycle motorcycleTest2;
    std::string randomizedPlateNumber = motorcycleTest2.GetPlateNumber();
    ASSERT_EQ(motorcycleTest2.GetPlateNumber(), randomizedPlateNumber);
}

TEST(MotorcycleTest, TestMotorcycleGetVehicleNameShouldReturnMotorcycle) {
    Motorcycle motorcycleTest3;

    ASSERT_EQ(motorcycleTest3.GetVehicleName(), "Motorcycle");
}

TEST(MotorcycleTest, TestMotorcycleGetPriceShouldReturnCorrectValue) {
    Motorcycle motorcycleTest3;

    ASSERT_EQ(motorcycleTest3.GetPrice(), 25);
}

// Add more tests