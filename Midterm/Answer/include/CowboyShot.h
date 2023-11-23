//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_COWBOYSHOT_H
#define OOP_COWBOYSHOT_H

#include <string>
#include "Shot.h"

class CowboyShot : public Shot {
private:
    std::string type = "Shot";
public:
    CowboyShot();
    std::string GetType();
};

#endif // OOP_COWBOYSHOT_H
