#include <string>
#include <vector>
#include <gtest/gtest.h>
#include <stdexcept>

#include "ElectricBus.hpp"

TEST(HW3, TestConstructElectricBusShouldReturnCorrectElectricity) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    int electricity = electricBus.GetElectricityPercentage();

    ASSERT_EQ(electricity, 85);
}

TEST(HW3, TestSetElectricityPercentageElectricBusShouldReturnCorrectElectricity) {
    ElectricBus electricBus({"theStops"}, "theRouteName", 50);

    electricBus.SetElectricityPercentage(85);

    ASSERT_EQ(electricBus.GetElectricityPercentage(), 85);
}

TEST(HW3, TestConstructInvalidElectricBusShouldReturnThrow) {
    ASSERT_THROW(ElectricBus electricBus({"theStops"}, "theRouteName", 115), std::invalid_argument);
}

TEST(HW3, TestSetInvalidElectricityPercentageElectricBusShouldReturnThrow) {
    ElectricBus electricBus({"theStops"}, "theRouteName", 50);

    ASSERT_THROW(electricBus.SetElectricityPercentage(110), std::invalid_argument);
}

TEST(HW3, TestGetPriceElectricBusShouldReturnCorrectPrice) {
    ElectricBus electricBus({"theStops"}, "theRouteName", 50);

    ASSERT_EQ(electricBus.GetPrice(15), 150);
    ASSERT_EQ(electricBus.GetPrice(25), 200);
}
// Add test to improve the test coverage.