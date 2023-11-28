//
// Created by 黃漢軒 on 2023/11/20.
//

#include <gtest/gtest.h>
#include <string>

#include "Car.hpp"
#include "Vehicle.hpp"

TEST(CarTest, TestCarWithPlateNumberConstructorShouldSetupCorrectValue) {
    Car carTest1("AAA-BBBB");

    ASSERT_EQ(carTest1.GetPlateNumber(), "AAA-BBBB");
}

TEST(CarTest, TestCarWithoutPlateNumberConstructorShouldSetupCorrectValue) {
    Car carTest2;
    std::string randomizedPlateNumber = carTest2.GetPlateNumber();
    ASSERT_EQ(carTest2.GetPlateNumber(), randomizedPlateNumber);
}

TEST(CarTest, TestCarShouldReturnVehicleNameCar) {
    Car carTest3;

    ASSERT_EQ(carTest3.GetVehicleName(), "Car");
}

TEST(CarTest, TestCarGetPriceShouldReturnCorrectValue) {
    Car carTest4;

    ASSERT_EQ(carTest4.GetPrice(), 40);
}

// Add more tests