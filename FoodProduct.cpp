//
// Created by Евгения on 14.10.2026.
//

#include "FoodProduct.h"
#include <iostream>

FoodProduct::FoodProduct(const std::string &n, const std::string &dept)
    : ProductItem(n), departemnt (dept){}


std::string FoodProduct::getDepartement() const {
    return departemnt;
}

void FoodProduct::setDepartement(const std::string &dept) {
    departemnt = dept;
}

void FoodProduct::showInfo() const {
    ProductItem::showInfo();
    std::cout<<" Вивід:"<< departemnt<<"\n";
}
