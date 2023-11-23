//
// Created by rivan on 11/23/2023.
//

#include "Shot.h"

Shot::Shot(int alcoholContent, int price) : Alcohol(alcoholContent, price) {}

void Shot::SetAlcoholContent(int alcoholContent) {
    Alcohol::SetAlcoholContent(alcoholContent);
}

int Shot::GetQuality() {
    return Alcohol::GetQuality(7, 5);
}