//
// Created by Евгения on 14.10.2026.
//

#include "DairyProduct.h"
#include <iostream>

DairyProduct::DairyProduct(const std::string &n, const std::string &dept, const std::string &var,const std::string &date)
    : FoodProduct(n , dept), variety(var), mfgDate(date){}


std::string DairyProduct::getVariaty() const {
    return variety;
}

void DairyProduct::setVariaty(const std::string &var) {
    variety = var;
}

std::string DairyProduct::getMfgDate() const {
    return  mfgDate;
}

void DairyProduct::setMfgDate(const std::string &date) {
    mfgDate = date;
}

void DairyProduct::showInfo() const {
    FoodProduct::showInfo();
    std::cout<<"Різновид:"<<variety<<",Дата виробництво:"<<mfgDate<<"\n";
}
