//
// Created by 黃漢軒 on 2023/12/22.
//

#include "Circle.hpp"
#include "Square.hpp"

#include <gtest/gtest.h>

// Implement tests here.

TEST(TestSquare, GetAreaShouldReturnCorrectValue) {
    Location location1(-1, 1);
    int theEdge1 = 2;
    Square square1(location1, theEdge1);

    ASSERT_EQ(square1.GetArea(), 4);
}

TEST(TestSquare, IsInShapeShouldReturnCorrectValue) {
    Location location1(-1, 1);
    int theEdge1 = 2;
    Square square1(location1, theEdge1);

    Point point1(1, 1);
    Point point2(2, 2);

    ASSERT_EQ(square1.IsInShape(point1), true);
    ASSERT_EQ(square1.IsInShape(point2), false);
}

TEST(TestSquare, IsOverlapShouldReturnCorrectValue) {
    Location location1(-1, 1);
    int theEdge1 = 2;
    Square square1(location1, theEdge1);

    Location location2(0, 0);
    int theEdge2 = 2;
    std::shared_ptr<IDrawable> squarePtr1 = std::make_shared<Square>(location2, theEdge2);

    Location location3(3, 3);
    int theEdge3 = 2;
    std::shared_ptr<IDrawable> squarePtr2 = std::make_shared<Square>(location3, theEdge3);

    ASSERT_EQ(square1.IsOverlap(squarePtr1), true);
    ASSERT_EQ(square1.IsOverlap(squarePtr2), false);
}

TEST(TestSquare, GetLeftTopPointShouldReturnCorrectValue) {
    Location location1(-1, 1);
    int theEdge1 = 2;
    Square square1(location1, theEdge1);

    Point leftTop1 = square1.GetLeftTopPoint();
    Point resultShouldBe(-1, 1);

    ASSERT_EQ(leftTop1.GetX(), resultShouldBe.GetX());
    ASSERT_EQ(leftTop1.GetY(), resultShouldBe.GetY());
}

TEST(TestSquare, GetEdgeShouldReturnCorrectValue) {
    Location location1(-1, 1);
    int theEdge1 = 2;
    Square square1(location1, theEdge1);

    ASSERT_EQ(square1.GetEdge(), theEdge1);
}