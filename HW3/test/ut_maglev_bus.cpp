#include <string>
#include <vector>
#include <gtest/gtest.h>
#include <stdexcept>

#include "MaglevBus.hpp"


TEST(HW3, TestConstructMaglevBusShouldReturnCorrectElectricity){
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    int electricity = maglevBus.GetElectricityPercentage();

    ASSERT_EQ(electricity, 85);
}
TEST(HW3, TestSetElectricityPercentageMaglevBusShouldReturnCorrectElectricity) {
    MaglevBus maglevBus({"theStops"}, "theRouteName", 50);

    maglevBus.SetElectricityPercentage(85);

    ASSERT_EQ(maglevBus.GetElectricityPercentage(), 85);
}

TEST(HW3, TestConstructInvalidMaglevBusShouldReturnThrow) {
    ASSERT_THROW(MaglevBus maglevBus({"theStops"}, "theRouteName", 120), std::invalid_argument);
}

TEST(HW3, TestSetInvalidElectricityPercentageMaglevBusShouldReturnThrow) {
    MaglevBus maglevBus({"theStops"}, "theRouteName", 50);

    ASSERT_THROW(maglevBus.SetElectricityPercentage(120), std::invalid_argument);
}

TEST(HW3, TestGetPriceMaglevBusShouldReturnCorrectPrice) {
    MaglevBus maglevBus({"theStops"}, "theRouteName", 50);

    ASSERT_EQ(maglevBus.GetPrice(5), 750);
    ASSERT_EQ(maglevBus.GetPrice(15), 825);
}

TEST(HW3, TestGetSpeedLimitMaglevBusShouldReturnCorrectSpeedLimit) {
    MaglevBus maglevBus({"theStops"}, "theRouteName", 50);

    ASSERT_EQ(maglevBus.GetSpeedLimit(), 80);
}
// Add test to improve the test coverage.