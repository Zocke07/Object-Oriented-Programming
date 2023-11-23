//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "CowboyShot.h"

CowboyShot::CowboyShot() : Shot(30, 600) {}

std::string CowboyShot::GetType() {
    return this->type;
}