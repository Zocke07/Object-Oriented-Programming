//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "Goldschlager.h"

Goldschlager::Goldschlager() : Shot(20, 200){}

std::string Goldschlager::GetType() {
    return this->type;
}