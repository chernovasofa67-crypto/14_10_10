//
// Created by Евгения on 14.10.2026.
//

#include "RadiioGood.h"
#include <iostream>

RadiioGood::RadiioGood(const std::string &n, const std::string &p)
    :ProductItem(n), purpose(p){}

std::string RadiioGood::getPurpose() const {
    return purpose;
}

void RadiioGood::setPurpose(const std::string &p) {
    purpose = p;
}

void RadiioGood::showInfo() const {
    ProductItem::showInfo();
    std::cout<<"призначення:"<<purpose<<"\n";
}

