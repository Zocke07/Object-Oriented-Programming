//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_MARTINI_H
#define OOP_MARTINI_H

#include <string>
#include "Cocktail.h"

class Martini : public Cocktail {
private:
    std::string type = "Cocktail";
public:
    Martini();
    std::string GetType();
};

#endif // OOP_MARTINI_H
