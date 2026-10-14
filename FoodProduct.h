//
// Created by Евгения on 14.10.2026.
//

#ifndef INC_14_10_10_FOODPRODUCT_H
#define INC_14_10_10_FOODPRODUCT_H

#include "ProductItem.h"
class FoodProduct :public ProductItem{
protected:
    std::string departemnt;
public:
    FoodProduct(const std::string &n, const std::string &dept);

    std::string getDepartement()const;
    void setDepartement(const std::string &dept);

    void showInfo() const override;
};


#endif //INC_14_10_10_FOODPRODUCT_H
