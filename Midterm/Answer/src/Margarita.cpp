//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "Margarita.h"

Margarita::Margarita() : Cocktail(400, {"Lemon"}){}

std::string Margarita::GetType(){
    return this->type;
}