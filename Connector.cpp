//
// Created by 沈敖 on 16/9/13.
//
#include "Connector.h"
#include <iostream>

Connector::Connector() { }

int Connector::getValue() {
    return this->value;
}

void Connector::setValue(int newValue, string setter) {
    if (!hasValue()) {
        this->value = newValue;
        this->informant = setter;
        for (shared_ptr<Constraint> c : constraints) {
            if (c->getName() != setter) {
                c->informAboutValue();
            }
        }
    } else {
        if (this->value != newValue) {
            cout << "Error! Contradiction (" << this->value << ", " << newValue << ")" << endl;
        }
    }
}

void Connector::forgetValue(string retractor) {
    if (retractor == informant) {
        this->informant = string();
        for (shared_ptr<Constraint> c : constraints) {
            if (c->getName() != retractor) {
                c->informAboutNoValue();
            }
        }
    }
}

void Connector::connect(Constraint *newConstraint) {

    shared_ptr<Constraint> sp(newConstraint);

    if (constraints.find(sp) == constraints.end()) {
        this->constraints.insert(sp);
        if (hasValue()) {
            newConstraint->informAboutValue();
        }
    }
}

bool Connector::hasValue() {
    return !this->informant.empty();
}
