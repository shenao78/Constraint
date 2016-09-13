//
// Created by 沈敖 on 16/9/13.
//

#ifndef CONSTRAINT_CONSTRAINT_H
#define CONSTRAINT_CONSTRAINT_H

#include <string>
using namespace std;

class Constraint {

private:
    string name;

public:

    Constraint(string name);
    string getName();

    virtual void informAboutValue() = 0;
    virtual void informAboutNoValue() = 0;
};

#endif //CONSTRAINT_CONSTRAINT_H
