//
// Created by 黃漢軒 on 2023/12/22.
//

#include <gtest/gtest.h>

#include "Circle.hpp"
#include "GraphicSystem.hpp"
#include "IDrawable.hpp"
#include "Square.hpp"

// Implement tests here.
TEST(TestGraphicSystem, ConstructorShouldThrow) {
    Location circleLocation1(0, 0);
    int theRadius1 = 2;
    std::shared_ptr<IDrawable> circle1 = std::make_shared<Circle>(circleLocation1, theRadius1);

    Location squareLocation1(0, 0);
    int theEdge1 = 2;
    std::shared_ptr<IDrawable> square1 = std::make_shared<Square>(squareLocation1, theEdge1);

    ASSERT_THROW(GraphicSystem graphicSystem({circle1, square1}), std::logic_error);
}

TEST(TestGraphicSystem, GetShapeWithIndexShouldReturnCorrectValue) {
    Location circleLocation1(0, 0);
    int theRadius1 = 2;
    std::shared_ptr<IDrawable> circle1 = std::make_shared<Circle>(circleLocation1, theRadius1);

    Location squareLocation1(3, 3);
    int theEdge1 = 2;
    std::shared_ptr<IDrawable> square1 = std::make_shared<Square>(squareLocation1, theEdge1);

    std::vector<std::shared_ptr<IDrawable>> drawables = {circle1, square1};

    GraphicSystem graphicSystem(drawables);

    std::shared_ptr<IDrawable> theCircle = graphicSystem.GetShape(0);
    std::shared_ptr<IDrawable> theSquare = graphicSystem.GetShape(1);

    double circleArea = theCircle->GetArea();
    double squareArea = theSquare->GetArea();

    ASSERT_EQ(circleArea, 12.56);
    ASSERT_EQ(squareArea, 4);
}

TEST(TestGraphicSystem, GetShapeWithIndexShouldThrow) {
    Location circleLocation1(0, 0);
    int theRadius1 = 2;
    std::shared_ptr<IDrawable> circle1 = std::make_shared<Circle>(circleLocation1, theRadius1);

    Location squareLocation1(3, 3);
    int theEdge1 = 2;
    std::shared_ptr<IDrawable> square1 = std::make_shared<Square>(squareLocation1, theEdge1);

    std::vector<std::shared_ptr<IDrawable>> drawables = {circle1, square1};

    GraphicSystem graphicSystem(drawables);

    ASSERT_THROW(graphicSystem.GetShape(2), std::logic_error);
}

TEST(TestGraphicSystem, GetShapeWithPointShouldReturnCorrectValue) {
    Location circleLocation1(0, 0);
    int theRadius1 = 2;
    std::shared_ptr<IDrawable> circle1 = std::make_shared<Circle>(circleLocation1, theRadius1);

    Location squareLocation1(3, 3);
    int theEdge1 = 2;
    std::shared_ptr<IDrawable> square1 = std::make_shared<Square>(squareLocation1, theEdge1);

    std::vector<std::shared_ptr<IDrawable>> drawables = {circle1, square1};

    GraphicSystem graphicSystem(drawables);

    std::shared_ptr<IDrawable> theCircle = graphicSystem.GetShape(0, 0);
    std::shared_ptr<IDrawable> theSquare = graphicSystem.GetShape(3, 3);

    double circleArea = theCircle->GetArea();
    double squareArea = theSquare->GetArea();

    ASSERT_EQ(circleArea, 12.56);
    ASSERT_EQ(squareArea, 4);
}

TEST(TestGraphicSystem, GetShapeWithPointShouldReturnThrow) {
    Location circleLocation1(0, 0);
    int theRadius1 = 2;
    std::shared_ptr<IDrawable> circle1 = std::make_shared<Circle>(circleLocation1, theRadius1);

    Location squareLocation1(3, 3);
    int theEdge1 = 2;
    std::shared_ptr<IDrawable> square1 = std::make_shared<Square>(squareLocation1, theEdge1);

    std::vector<std::shared_ptr<IDrawable>> drawables = {circle1, square1};

    GraphicSystem graphicSystem(drawables);

    ASSERT_THROW(graphicSystem.GetShape(6, 6), std::logic_error);
}

TEST(TestGraphicSystem, AddShapeShouldReturnCorrectValue) {
    Location circleLocation1(0, 0);
    int theRadius1 = 2;
    std::shared_ptr<IDrawable> circle1 = std::make_shared<Circle>(circleLocation1, theRadius1);

    Location squareLocation1(3, 3);
    int theEdge1 = 2;
    std::shared_ptr<IDrawable> square1 = std::make_shared<Square>(squareLocation1, theEdge1);

    std::vector<std::shared_ptr<IDrawable>> drawables = {circle1};

    GraphicSystem graphicSystem(drawables);

    graphicSystem.AddShape(square1);

    std::shared_ptr<IDrawable> theCircle = graphicSystem.GetShape(0, 0);
    std::shared_ptr<IDrawable> theSquare = graphicSystem.GetShape(3, 3);

    double circleArea = theCircle->GetArea();
    double squareArea = theSquare->GetArea();

    ASSERT_EQ(circleArea, 12.56);
    ASSERT_EQ(squareArea, 4);
}

TEST(TestGraphicSystem, AddShapeShouldThrow) {
    Location circleLocation1(0, 0);
    int theRadius1 = 2;
    std::shared_ptr<IDrawable> circle1 = std::make_shared<Circle>(circleLocation1, theRadius1);

    Location squareLocation1(0, 0);
    int theEdge1 = 2;
    std::shared_ptr<IDrawable> square1 = std::make_shared<Square>(squareLocation1, theEdge1);

    std::vector<std::shared_ptr<IDrawable>> drawables = {circle1};

    GraphicSystem graphicSystem(drawables);

    ASSERT_THROW(graphicSystem.AddShape(square1), std::logic_error);
}

TEST(TestGraphicSystem, CalculateTotalAreaShouldReturnCorrectValue) {
    Location circleLocation1(0, 0);
    int theRadius1 = 2;
    std::shared_ptr<IDrawable> circle1 = std::make_shared<Circle>(circleLocation1, theRadius1);

    Location squareLocation1(3, 3);
    int theEdge1 = 2;
    std::shared_ptr<IDrawable> square1 = std::make_shared<Square>(squareLocation1, theEdge1);

    std::vector<std::shared_ptr<IDrawable>> drawables = {circle1};

    GraphicSystem graphicSystem(drawables);

    graphicSystem.AddShape(square1);

    std::shared_ptr<IDrawable> theCircle = graphicSystem.GetShape(0, 0);
    std::shared_ptr<IDrawable> theSquare = graphicSystem.GetShape(3, 3);

    double circleArea = theCircle->GetArea();
    double squareArea = theSquare->GetArea();

    double totalArea = circleArea + squareArea;

    ASSERT_EQ(graphicSystem.CalculateTotalArea(), totalArea);
}

TEST(TestGraphicSystem, SizeShouldReturnCorrectValue) {
    Location circleLocation1(0, 0);
    int theRadius1 = 2;
    std::shared_ptr<IDrawable> circle1 =
        std::make_shared<Circle>(circleLocation1, theRadius1);

    Location squareLocation1(3, 3);
    int theEdge1 = 2;
    std::shared_ptr<IDrawable> square1 =
        std::make_shared<Square>(squareLocation1, theEdge1);

    std::vector<std::shared_ptr<IDrawable>> drawables = {circle1};

    GraphicSystem graphicSystem(drawables);

    graphicSystem.AddShape(square1);

    ASSERT_EQ(graphicSystem.Size(), 2);
}