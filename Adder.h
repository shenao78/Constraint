//
// Created by 沈敖 on 16/9/13.
//

#ifndef CONSTRAINT_ADDER_H
#define CONSTRAINT_ADDER_H

#include "Connector.h"
#include "Constraint.h"
#include <memory>

/**
 * 加法约束器
 */
class Adder : public Constraint {

private:

    shared_ptr<Connector> a1; //左操作数
    shared_ptr<Connector> a2; //右操作数
    shared_ptr<Connector> sum; //两者之和

public:

    Adder(Connector *a1, Connector *a2, Connector *sum, string name);

    /**
     * 当操作数或者两者之和发生变化时,将得到通知
     */
    void informAboutValue() override;
    /**
     * 通知忘掉之前设置的值
     */
    void informAboutNoValue() override;
};

#endif