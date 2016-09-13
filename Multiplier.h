//
// Created by 沈敖 on 16/9/13.
//

#ifndef CONSTRAINT_MULTIPLIER_H
#define CONSTRAINT_MULTIPLIER_H

#include "Constraint.h"
#include "Connector.h"
#include <memory>

/**
 * 乘法约束器
 */
class Multiplier : public Constraint {

private:
    shared_ptr<Connector> m1; //左操作数
    shared_ptr<Connector> m2; //右操作数
    shared_ptr<Connector> product; //两者乘积

public:

    Multiplier(Connector *m1, Connector *m2, Connector *product, string name);

    void informAboutValue() override;
    void informAboutNoValue() override;
};

#endif //CONSTRAINT_MULTIPLIER_H
