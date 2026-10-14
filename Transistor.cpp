//
// Created by Евгения on 14.10.2026.
//

#include "Transistor.h"
#include <iostream>

Transistor::Transistor(const std::string &n, const std::string &p, const std::string &t, const std::string &num)

    :RadiioGood(n ,p), type(t), number(num){}

std::string Transistor::getType() const {
    return type;
}

void Transistor::setType(const std::string &t) {
    type = t;
}

std::string Transistor::getNumber() const {
    return number;
}

void Transistor::setNumber(const std::string &num) {
    number = num;
}

void Transistor::showInfo() const {
    RadiioGood::showInfo();
    std::cout<<"Тип (параметер):"<<type<<",Номер:"<<number<<"\n";
}
