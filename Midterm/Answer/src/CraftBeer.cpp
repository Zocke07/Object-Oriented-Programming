//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "CraftBeer.h"

CraftBeer::CraftBeer() : Beer(400) {}

std::string CraftBeer::GetType() {
    return this->type;
}