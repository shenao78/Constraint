//
// Created by 沈敖 on 16/9/13.
//

#ifndef CONSTRAINT_CONNECTOR_H
#define CONSTRAINT_CONNECTOR_H


#include <string>
#include <set>
#include "Constraint.h"
#include <memory>
using namespace std;

class Connector {

private:
    int value; //connector当前的value
    string informant; //设置value的约束器名称
    set<shared_ptr<Constraint>> constraints; //当前connector连接的约束器

public:

    Connector();

    int getValue();
    void setValue(int newValue, string setter);
    /**
     * 通过检验informant是否为空来判断是否已经设定value
     */
    bool hasValue();
    /**
     * 忘掉之前的值,只需将informant设置为空即可
     */
    void forgetValue(string retractor);
    void connect(Constraint *newConstraint);

};

#endif //CONSTRAINT_CONNECTOR_H
