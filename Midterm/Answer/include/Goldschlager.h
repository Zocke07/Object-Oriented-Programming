//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_GOLDSCHLAGER_H
#define OOP_GOLDSCHLAGER_H

#include <string>
#include "Shot.h"

class Goldschlager : public Shot {
private:
    std::string type = "Shot";
public:
    Goldschlager();
    std::string GetType();
};

#endif // OOP_GOLDSCHLAGER_H
