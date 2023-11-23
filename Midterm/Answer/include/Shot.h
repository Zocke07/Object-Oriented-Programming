//
// Created by rivan on 11/23/2023.
//

#ifndef OOP_SHOT_H
#define OOP_SHOT_H

#include "Alcohol.h"

class Shot : public Alcohol {
private:

public:
    Shot(int alcoholContent, int price);
    void SetAlcoholContent(int alcoholContent);
    int GetQuality();
};

#endif // OOP_SHOT_H
