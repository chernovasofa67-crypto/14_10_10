//
// Created by Евгения on 14.10.2026.
//

#include "ProductItem.h"
#include <iostream>

ProductItem::ProductItem(const std::string& n) {

}

std::string ProductItem::getName() const {
    return name;
}

void ProductItem::setName(const std::string& n) {
    name = n;
}

void ProductItem::showInfo() const {
    std::cout<< "товаР:"<<name <<"\n";
}
