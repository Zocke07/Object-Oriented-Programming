//
// Created by rivan on 11/23/2023.
//

#include <string>

#include "Rum.h"

Rum::Rum() : Shot(60, 800) {}

std::string Rum::GetType() {
    return this->type;
}