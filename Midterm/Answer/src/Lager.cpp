//
// Created by 黃漢軒 on 2023/10/30.
//

#include <string>

#include "Lager.h"

Lager::Lager() : Beer(300) {}

std::string Lager::GetType(){
    return this->type;
}