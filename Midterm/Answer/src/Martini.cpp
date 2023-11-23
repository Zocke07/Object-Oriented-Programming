//
// Created by 黃漢軒 on 2023/10/30.
//
#include "Martini.h"

Martini::Martini() : Cocktail(500, {}) {}

std::string Martini::GetType() {
    return this->type;
}