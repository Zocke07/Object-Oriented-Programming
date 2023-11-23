//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "Hefeweizen.h"

Hefeweizen::Hefeweizen() : Beer(400) {}

std::string Hefeweizen::GetType() {
    return this->type;
}