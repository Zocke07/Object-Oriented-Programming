//
// Created by 黃漢軒 on 2023/12/12.
//

#include "Circle.hpp"
#include "ShapeHelper.hpp"

Circle::Circle(Location location, int radius) : radius(radius), location(location){
}

double Circle::GetArea() {
    return (this->radius * this->radius * 3.14);
}

Point Circle::GetLeftTopPoint() {
    return Point(this->GetBoxContainer().GetX(), this->GetBoxContainer().GetY());
}

bool Circle::IsInShape(Point point) {
    ShapeHelper shapeHelper;
    return shapeHelper.IsPointInCircle(this->location.GetX(),
                                        this->location.GetY(), this->radius,
                                        point.GetX(), point.GetY());
}

bool Circle::IsOverlap(std::shared_ptr<IDrawable> drawable) {
    ShapeHelper shapeHelper;
    return shapeHelper.IsBoxOverlap(this->GetBoxContainer(),
                                     drawable->GetBoxContainer());
}

BoxContainer Circle::GetBoxContainer() {
    return BoxContainer(this->location, this->radius);
}

int Circle::GetRadius() {
    return this->radius;
}