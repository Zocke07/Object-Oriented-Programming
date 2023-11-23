//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "Tequila.h"

Tequila::Tequila() : Shot(40, 800) {}

std::string Tequila::GetType() {
    return this->type;
}