//
// Created by 沈敖 on 16/9/13.
//

#ifndef CONSTRAINT_PROBE_H
#define CONSTRAINT_PROBE_H

#include "Constraint.h"
#include "Connector.h"

/**
 * 监视器,当connector的值发生变化时,将打印结果
 */
class Probe : public Constraint {

private:
    shared_ptr<Connector> connector;

    void printProbe(string value);

public:

    Probe(Connector *connector, string name);

    void informAboutValue() override;
    void informAboutNoValue() override;
};

#endif //CONSTRAINT_PROBE_H
