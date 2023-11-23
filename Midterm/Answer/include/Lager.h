//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_LAGER_H
#define OOP_LAGER_H

#include <string>
#include "Beer.h"

class Lager : public Beer {
private:
    std::string type = "Beer";
public:
    Lager();
    std::string GetType();
};

#endif // OOP_LAGER_H
