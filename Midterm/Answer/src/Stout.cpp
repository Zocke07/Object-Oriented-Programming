//
// Created by rivan on 11/23/2023.
//

#include <string>

#include "Stout.h"

Stout::Stout() : Beer(500) {}

std::string Stout::GetType() {
    return this->type;
}