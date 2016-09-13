#include <iostream>

using namespace std;

#include "Adder.h"
#include "Probe.h"
#include "Constant.h"
#include "Multiplier.h"

int main() {

    Connector *C = new Connector();
    Connector *F = new Connector();

    Constraint *p1 = new Probe(C, "摄氏温度");
    Constraint *p2 = new Probe(F, "华氏温度");

    Connector *u = new Connector();
    Connector *v = new Connector();
    Connector *w = new Connector();
    Connector *x = new Connector();
    Connector *y = new Connector();

    Constraint *mul1 = new Multiplier(C, w, u, "mul1");
    Constraint *mul2 = new Multiplier(v, x, u, "mul2");
    Constraint *adder = new Adder(v, y, F, "add1");

    Constraint *con1 = new Constant(w, 9, "con1");
    Constraint *con2 = new Constant(x, 5, "con2");
    Constraint *con3 = new Constant(y, 32, "con3");

    C->setValue(10, "shenao");
    //cout << F->getValue() << endl;

   // C->forgetValue("shenao");
    F->setValue(200, "shenao");
    //cout << C->getValue() << endl;

    return 0;
}