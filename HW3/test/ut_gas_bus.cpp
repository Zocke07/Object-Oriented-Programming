//
// Created by 黃漢軒 on 2023/10/21.
//

#include <string>
#include <vector>
#include <gtest/gtest.h>
#include <stdexcept>

#include "GasBus.hpp"

TEST(HW3, TestSetRouteNameShouldSetupRouteName) {
    GasBus gasBus({"民權中山路口"}, "民權幹線", 40);

    gasBus.setRouteName("中山幹線");

    ASSERT_EQ(gasBus.GetRouteName(), "中山幹線");
}

TEST(HW3, TestSetStopsShouldSetupStops) {
    GasBus gasBus({"theStops"}, "theRouteName", 50);

    gasBus.setStops({"firstStop", "secondStop", "thirdStop"});
    std::vector<std::string> theSetStops = {"firstStop", "secondStop", "thirdStop"};

    ASSERT_EQ(gasBus.GetStops(), theSetStops);
}

TEST(HW3, TestGetSpeedLimitShouldGetSpeedLimit) {
    GasBus gasBus({"theStops"}, "theRouteName", 60);

    ASSERT_EQ(gasBus.GetSpeedLimit(), 40);
}

TEST(HW3, TestSetGasShouldSetupGas) {
    GasBus gasBus({"theStops"}, "theRouteName", 50);

    gasBus.SetGas(25);

    ASSERT_EQ(gasBus.GetGas(), 25);
}

TEST(HW3, TestGetPriceShouldReturnPrice) {
    GasBus gasBus({"theStops"}, "theRouteName", 50);

    ASSERT_EQ(gasBus.GetPrice(25), 450);
    ASSERT_EQ(gasBus.GetPrice(35), 475);
}