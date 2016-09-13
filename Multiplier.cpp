//
// Created by 沈敖 on 16/9/13.
//

#include "Multiplier.h"


Multiplier::Multiplier(Connector *m1, Connector *m2, Connector *product, string name)
        :Constraint(name), m1(m1), m2(m2), product(product) {

    this->m1->connect(this);
    this->m2->connect(this);
    product->connect(this);
}


void Multiplier::informAboutValue() {
    if (m1->hasValue() && m2->hasValue()) {
        product->setValue(m1->getValue() * m2->getValue(), this->getName());
    }
    if (m1->hasValue() && product->hasValue()) {
        m2->setValue(product->getValue() / m1->getValue(), this->getName());
    }
    if (m2->hasValue() && product->hasValue()) {
        m1->setValue(product->getValue() / m2->getValue(), this->getName());
    }
}

void Multiplier::informAboutNoValue() {
    m1->forgetValue(this->getName());
    m2->forgetValue(this->getName());
    product->forgetValue(this->getName());
    informAboutValue();
}

