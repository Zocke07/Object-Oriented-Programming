//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_HEFEWEIZEN_H
#define OOP_HEFEWEIZEN_H

#include <string>
#include "Beer.h"

class Hefeweizen : public Beer {
private:
    std::string type = "Beer";
public:
    Hefeweizen();
    std::string GetType();
};

#endif // OOP_HEFEWEIZEN_H
