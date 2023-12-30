//
// Created by 黃漢軒 on 2023/12/22.
//

#include "BoxContainer.hpp"

#include <gtest/gtest.h>

// Implement tests here.

TEST(TestBoxContainer, GetXandYshouldReturnCorrectValue) {
    Point center1(0,0);
    int radius1 = 2;

    BoxContainer boxContainer(center1, radius1);

    ASSERT_EQ(boxContainer.GetX(), -2);
    ASSERT_EQ(boxContainer.GetY(), 2);
}

TEST(TestBoxContainer, GetHeightAndWidthShouldReturnCorrectValue) {
    Point point1(-1, 1);
    Point point2(2, -1);
    std::vector<Point> thePoints = {point1, point2};

    BoxContainer boxContainer(thePoints);

    ASSERT_EQ(boxContainer.GetHeight(), 2);
    ASSERT_EQ(boxContainer.GetWidth(), 3);
}