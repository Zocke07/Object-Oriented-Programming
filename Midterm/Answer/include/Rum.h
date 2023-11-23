//
// Created by rivan on 11/23/2023.
//

#ifndef MATERIAL_RUM_H
#define MATERIAL_RUM_H

#include "Shot.h"

class Rum : public Shot {
private:
    std::string type = "Shot";
public:
    Rum();
    std::string GetType();
};


#endif // MATERIAL_RUM_H
