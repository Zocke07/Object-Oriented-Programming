//
// Created by rivan on 11/23/2023.
//

#ifndef OOP_COCKTAIL_H
#define OOP_COCKTAIL_H

#include <string>
#include <vector>

#include "Alcohol.h"

class Cocktail : public Alcohol {
private:
    std::vector<std::string> topping;
public:
    Cocktail(int price, std::vector<std::string> topping);
    std::vector<std::string> GetTopping();
    void SetAlcoholContent(int alcoholContent);
    int GetQuality();
};

#endif // OOP_COCKTAIL_H
