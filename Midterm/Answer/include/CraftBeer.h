//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_CRAFTBEER_H
#define OOP_CRAFTBEER_H

#include <string>
#include "Beer.h"

class CraftBeer : public Beer {
private:
    std::string type = "Beer";
public:
    CraftBeer();
    std::string GetType();
};

#endif // OOP_CRAFTBEER_H
