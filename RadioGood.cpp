//
// Created by Евгения on 14.10.2026.
//

#include "RadioGood.h"
#include <iostream>

RadioGood::RadioGood(const std::string &n, const std::string &p)
    :ProductItem(n), purpose(p){}

std::string RadioGood::getPurpose() const {
    return purpose;
}

void RadioGood::setPurpose(const std::string &p) {
    purpose = p;
}

void RadioGood::showInfo() const {
    ProductItem::showInfo();
    std::cout<<"призначення:"<<purpose<<"\n";
}

