//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "IPA.h"

IPA::IPA() : Beer(600) {}

std::string IPA::GetType() {
    return this->type;
}