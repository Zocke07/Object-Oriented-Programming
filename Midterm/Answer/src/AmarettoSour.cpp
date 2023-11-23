//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "AmarettoSour.h"

AmarettoSour::AmarettoSour() : Cocktail(500, {"OrangePiece"}){}

std::string AmarettoSour::GetType(){
    return this->type;
}