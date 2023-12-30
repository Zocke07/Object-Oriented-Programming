//
// Created by 黃漢軒 on 2023/12/22.
//

#include <vector>

#include "GraphicSystem.hpp"

GraphicSystem::GraphicSystem(std::vector<std::shared_ptr<IDrawable>> drawables){
    for (size_t i = 0; i < drawables.size() - 1; ++i) {
        for (size_t j = 1; j < drawables.size(); ++j) {
            if (drawables[i]->IsOverlap(drawables[j])) {
                throw std::logic_error("logic error");
            }
        }
    }
    this->drawables = drawables;
}

void GraphicSystem::AddShape(std::shared_ptr<IDrawable> drawable){
    for (const auto& existingDrawable : drawables) {
        if (existingDrawable->IsOverlap(drawable)) {
            throw std::logic_error("logic error");
        }
    }
    this->drawables.push_back(drawable);
}

std::shared_ptr<IDrawable> GraphicSystem::GetShape(unsigned int index){
    if (index >= drawables.size()) {
        throw std::logic_error("logic error");
    }
    return this->drawables[index];
}

std::shared_ptr<IDrawable> GraphicSystem::GetShape(unsigned int x, unsigned int y){
    for (const auto& drawable : drawables) {
        if (drawable->IsInShape(Point(x, y))) {
            return drawable;
        }
    }
    throw std::logic_error("logic error");
}

double GraphicSystem::CalculateTotalArea(){
    double total = 0;
    for (const auto& drawable : drawables) {
        total += drawable->GetArea();
    }
    return total;
}

int GraphicSystem::Size() {
    return drawables.size();
}