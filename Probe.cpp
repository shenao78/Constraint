//
// Created by 沈敖 on 16/9/13.
//

#include "Probe.h"
#include <iostream>

Probe::Probe(Connector *connector, string name)
        :connector(connector), Constraint(name) {

    this->connector->connect(this);
}

void Probe::informAboutValue() {
    char value[20];
    sprintf(value, "%d", this->connector->getValue());
    printProbe(value);
}

void Probe::informAboutNoValue() {
    printProbe("?");
}

void Probe::printProbe(string value) {
    cout << "Probe:" << getName() << "=" << value << endl;
}
