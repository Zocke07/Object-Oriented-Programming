//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_AMARETTOSOUR_H
#define OOP_AMARETTOSOUR_H

#include <string>
#include "Cocktail.h"

class AmarettoSour : public Cocktail {
private:
    std::string type = "Cocktail";
public:
    AmarettoSour();
    std::string GetType();
};

#endif // OOP_AMARETTOSOUR_H
