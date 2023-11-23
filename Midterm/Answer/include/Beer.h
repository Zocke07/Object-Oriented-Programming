//
// Created by rivan on 11/23/2023.
//

#ifndef OOP_BEER_H
#define OOP_BEER_H

#include <string>
#include <vector>

#include "Alcohol.h"

class Beer : public Alcohol {
private:

public:
    Beer(int price);
    int GetQuality();
};

#endif // OOP_BEER_H
