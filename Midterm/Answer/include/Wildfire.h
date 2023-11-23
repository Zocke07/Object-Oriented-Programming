//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_WILDFIRE_H
#define OOP_WILDFIRE_H

#include <string>
#include "Cocktail.h"

class Wildfire : public Cocktail {
private:
    std::string type = "Cocktail";
public:
    Wildfire();
    std::string GetType();
};

#endif // OOP_WILDFIRE_H
