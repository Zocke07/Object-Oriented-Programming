//
// Created by rivan on 11/23/2023.
//

#include "Beer.h"

Beer::Beer(int price) : Alcohol(5, price) {}

int Beer::GetQuality() {
    return Alcohol::GetQuality(8, 5);
}