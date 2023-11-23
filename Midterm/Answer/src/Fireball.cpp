//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "Fireball.h"

Fireball::Fireball() : Shot(20, 800) {}

std::string Fireball::GetType(){
    return this->type;
}