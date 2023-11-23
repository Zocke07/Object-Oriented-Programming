//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_MARGARITA_H
#define OOP_MARGARITA_H

#include <string>
#include "Cocktail.h"

class Margarita : public Cocktail {
private:
    std::string type = "Cocktail";
public:
    Margarita();
    std::string GetType();
};

#endif // OOP_MARGARITA_H
