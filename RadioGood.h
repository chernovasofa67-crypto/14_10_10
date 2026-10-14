//
// Created by Евгения on 14.10.2026.
//

#ifndef INC_14_10_10_RADIIOGOOD_H
#define INC_14_10_10_RADIIOGOOD_H

#include "ProductItem.h"
class RadioGood  : public ProductItem{
protected:
    std::string purpose;
public:
    RadioGood(const std::string& n, const std::string& p);
    std::string getPurpose() const;
    void setPurpose(const std::string& p);
    void showInfo() const override;
};


#endif //INC_14_10_10_RADIIOGOOD_H
