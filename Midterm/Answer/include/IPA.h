//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_IPA_H
#define OOP_IPA_H

#include <string>
#include "Beer.h"
class IPA : public Beer {
private:
    std::string type = "Beer";
public:
    IPA();
    std::string GetType();
};

#endif // OOP_IPA_H
