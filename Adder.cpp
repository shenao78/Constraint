//
// Created by 沈敖 on 16/9/13.
//
#include "Adder.h"


Adder::Adder(Connector *a1, Connector *a2, Connector *sum, string name)
        :Constraint(name), a1(a1), a2(a2), sum(sum) {

    a1->connect(this);
    a2->connect(this);
    sum->connect(this);
}


void Adder::informAboutValue() {
    if (a1->hasValue() && a2->hasValue()) {
        sum->setValue(a1->getValue() + a2->getValue(), this->getName());
    }
    if (a1->hasValue() && sum->hasValue()) {
        a2->setValue(sum->getValue() - a1->getValue(), this->getName());
    }
    if (a2->hasValue() && sum->hasValue()) {
        a1->setValue(sum->getValue() - a2->getValue(), this->getName());
    }
}

void Adder::informAboutNoValue() {
    a1->forgetValue(this->getName());
    a2->forgetValue(this->getName());
    sum->forgetValue(this->getName());
    informAboutValue();
}

