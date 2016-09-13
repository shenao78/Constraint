//
// Created by 沈敖 on 16/9/13.
//

#include "Constant.h"
#include <iostream>


Constant::Constant(Connector *connector, int value, string name)
        :Constraint(name), connector(connector) {

    this->connector->connect(this);
    this->connector->setValue(value, this->getName());
}


void Constant::informAboutValue() {
    cout << "unsupported method of informAboutValue in Constant" << endl;
}

void Constant::informAboutNoValue() {
    cout << "unsupported method of informAboutNoValue in Constant" << endl;
}
