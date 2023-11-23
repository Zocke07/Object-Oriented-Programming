//
// Created by rivan on 11/23/2023.
//

#include "Cocktail.h"
#include <stdexcept>

Cocktail::Cocktail(int price, std::vector<std::string> topping) : Alcohol(30, price), topping(topping) {}

std::vector<std::string> Cocktail::GetTopping() {
    return topping;
}

void Cocktail::SetAlcoholContent(int alcoholContent) {
    Alcohol::SetAlcoholContent(alcoholContent);
}

int Cocktail::GetQuality() {
    return Alcohol::GetQuality(10, topping.empty() ? 5 : 10);
}