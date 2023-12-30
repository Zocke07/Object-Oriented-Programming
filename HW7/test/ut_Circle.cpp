//
// Created by 黃漢軒 on 2023/12/22.
//

#include "Circle.hpp"

#include <gtest/gtest.h>

// Implement tests here.

TEST(TestCircle, GetAreaShouldReturnCorrectValue) {
    Location location1(0, 0);
    int theRadius1 = 2;
    Circle circle1(location1, theRadius1);

    ASSERT_EQ(circle1.GetArea(), 12.56);
}

TEST(TestCircle, IsInShapeShouldReturnCorrectValue) {
    Location location1(0, 0);
    int theRadius1 = 2;
    Circle circle1(location1, theRadius1);

    Point point1(1, 1);
    Point point2(3, 3);

    ASSERT_EQ(circle1.IsInShape(point1), true);
    ASSERT_EQ(circle1.IsInShape(point2), false);
}

TEST(TestCircle, IsOverLapShouldReturnCorrectValue) {
    Location theCenter1(0, 0);
    int theRadius1 = 2;
    Circle circle1(theCenter1, theRadius1);

    Location theCenter2(5, 5);
    int theRadius2 = 2;
    std::shared_ptr<IDrawable> circlePtr1 = std::make_shared<Circle>(theCenter2, theRadius2);

    Location theCenter3(3, 3);
    int theRadius3 = 3;
    std::shared_ptr<IDrawable> circlePtr2 = std::make_shared<Circle>(theCenter3, theRadius3);

    ASSERT_EQ(circle1.IsOverlap(circlePtr1), false);
    ASSERT_EQ(circle1.IsOverlap(circlePtr2), true);
}

TEST(TestCircle, GetLeftTopPointShouldReturnCorrectValue) {
    Location theCenter1(0, 0);
    int theRadius1 = 2;
    Circle circle1(theCenter1, theRadius1);

    Point leftTop1 = circle1.GetLeftTopPoint();
    Point resultShouldBe(-2, 2);

    ASSERT_EQ(leftTop1.GetX(), resultShouldBe.GetX());
    ASSERT_EQ(leftTop1.GetY(), resultShouldBe.GetY());
}

TEST(TestCircle, GetRadiusShouldReturnCorrectValue) {
    Location theCenter1(0, 0);
    int theRadius1 = 2;
    Circle circle1(theCenter1, theRadius1);

    ASSERT_EQ(circle1.GetRadius(), theRadius1);
}