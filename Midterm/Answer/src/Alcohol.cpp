//
// Created by rivan on 11/23/2023.
//

#include <string>
#include <stdexcept>
#include "Alcohol.h"

Alcohol::Alcohol(int alcoholContent, int price) : alcoholContent(alcoholContent), price(price) {}

void Alcohol::SetAlcoholContent(int alcoholContent) {
    if (alcoholContent > 100 || alcoholContent < 0) {
        throw std::invalid_argument("Invalid");
    }
    else {
        this->alcoholContent = alcoholContent;
    }
}

int Alcohol::GetQuality(int bs, int ts) {
    int as = alcoholContent;
    int ps = price/100 * 10;
    return 30 * bs + 25 * as + 20 * ts + 25 * ps;
}

int Alcohol::GetAlcoholContent() {
    return alcoholContent;
}

int Alcohol::GetPrice() {
    return price;
}



