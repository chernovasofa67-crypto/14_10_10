//
// Created by Евгения on 14.10.2026.
//

#ifndef INC_14_10_10_DAIRYPRODUCT_H
#define INC_14_10_10_DAIRYPRODUCT_H

#include "FoodProduct.h"
#include "ProductItem.h"
class DairyProduct :public FoodProduct{
protected:
    std::string variety;
    std::string mfgDate;
public:
    DairyProduct(const std:: string &n, const std::string &dept, const std::string &var, const std::string &date);
    std::string getVariaty() const;
    void setVariaty(const std::string &var);

    std ::string getMfgDate() const;
    void setMfgDate(const std::string &date);

    void showInfo() const override;
};


#endif //INC_14_10_10_DAIRYPRODUCT_H
