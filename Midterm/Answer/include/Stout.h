//
// Created by rivan on 11/23/2023.
//

#ifndef MATERIAL_STOUT_H
#define MATERIAL_STOUT_H

#include <string>
#include "Beer.h"

class Stout : public Beer {
private:
    std::string type = "Beer";
public:
    Stout();
    std::string GetType();
};

#endif // MATERIAL_STOUT_H
