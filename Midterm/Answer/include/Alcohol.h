//
// Created by rivan on 11/23/2023.
//

#ifndef OOP_ALCOHOL_H
#define OOP_ALCOHOL_H

#include <string>

class Alcohol {
private:
    int alcoholContent;
    int price;
protected:
    void SetAlcoholContent(int alcoholContent);
    int GetQuality(int bs, int ts);
public:
    Alcohol(int alcoholContent, int price);
    int GetAlcoholContent();
    int GetPrice();
};

#endif // OOP_ALCOHOL_H
