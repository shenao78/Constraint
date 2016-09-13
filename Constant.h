//
// Created by 沈敖 on 16/9/13.
//

#ifndef CONSTRAINT_CONSTANT_H
#define CONSTRAINT_CONSTANT_H

#include "Constraint.h"
#include "Connector.h"
#include <string>

/**
 * 常数约束器
 */
class Constant : public Constraint {

private:
    shared_ptr<Connector> connector;

public:

    Constant(Connector *connector, int value, string name);

    void informAboutValue() override;
    void informAboutNoValue() override;

};

#endif //CONSTRAINT_CONSTANT_H
