//
// Created by Евгения on 14.10.2026.
//

#ifndef INC_14_10_10_TRANSISTOR_H
#define INC_14_10_10_TRANSISTOR_H

#include "RadiioGood.h"
class Transistor :public RadiioGood{
private:
    std::string type;
    std::string number;
public:
    Transistor(const std::string &n, const std::string &p, const std::string &t, const std::string &num);
    std::string getType() const;
    void setType(const std::string &t);
    std::string getNumber() const;
    void setNumber(const std::string &num);

    void showInfo() const override;
};


#endif //INC_14_10_10_TRANSISTOR_H
