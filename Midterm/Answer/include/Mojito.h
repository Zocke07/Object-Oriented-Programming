//
// Created by rivan on 11/23/2023.
//

#ifndef MATERIAL_MOJITO_H
#define MATERIAL_MOJITO_H

#include <string>
#include "Cocktail.h"

class Mojito : public Cocktail {
private:
    std::string type = "Cocktail";
public:
    Mojito();
    std::string GetType();
};

#endif // MATERIAL_MOJITO_H
