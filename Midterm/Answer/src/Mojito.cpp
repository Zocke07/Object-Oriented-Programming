//
// Created by rivan on 11/23/2023.
//

#include <string>

#include "Mojito.h"

Mojito::Mojito() : Cocktail(400, {}) {}

std::string Mojito::GetType(){
    return this->type;
}