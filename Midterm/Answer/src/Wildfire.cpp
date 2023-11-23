//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "Wildfire.h"

Wildfire::Wildfire() : Cocktail(300, {"CinnamonWhiskey", "AppleJuice"}) {}

std::string Wildfire::GetType(){
    return this->type;
}