//
// Created by 黃漢軒 on 2023/12/12.
//

#include "ShapeHelper.hpp"
#include "Square.hpp"

Square::Square(Location location, int edge) : edge(edge), location(location) {
}

double Square::GetArea() {
    return (this->edge * this->edge);
}

Point Square::GetLeftTopPoint() {
    return Point(this->GetBoxContainer().GetX(), this->GetBoxContainer().GetY());
}

bool Square::IsInShape(Point point) {
    ShapeHelper shapeHelper;
    return shapeHelper.IsPointInSquare(this->location.GetX(),
                                        this->location.GetY(), this->edge,
                                        point.GetX(), point.GetY());
}

bool Square::IsOverlap(std::shared_ptr<IDrawable> drawable) {
    ShapeHelper shapeHelper;
    return shapeHelper.IsBoxOverlap(this->GetBoxContainer(), drawable->GetBoxContainer());
}

BoxContainer Square::GetBoxContainer() {
    int xBottom = location.GetX() + edge;
    int yBottom = location.GetY() - edge;

    std::vector<Point> points {
        Point(location.GetX(), location.GetY()),
        Point(xBottom, yBottom)
    };
    return BoxContainer(points);
}

int Square::GetEdge() {
    return this->edge;
}