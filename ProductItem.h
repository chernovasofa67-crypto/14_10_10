//
// Created by Евгения on 14.10.2026.
//

#ifndef INC_14_10_10_PRODUCTITEM_H
#define INC_14_10_10_PRODUCTITEM_H

#include <string>

class ProductItem {
protected:
    std::string name;
public:
    ProductItem(const std::string& n);
    virtual ~ProductItem() = default;

    std::string getName() const;
    void setName(const std::string& n);
    virtual void showInfo() const;
};


#endif //INC_14_10_10_PRODUCTITEM_H
