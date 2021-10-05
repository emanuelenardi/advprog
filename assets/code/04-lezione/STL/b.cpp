#include "b.h"

B::B(A &_a) { add(_a); }

void B::add(A &_a) { lpa.push_front(&_a); }

void B::stampa() const {
    list<A *>::const_iterator it;
    for (it = lpa.begin(); it != lpa.end(); it++)
        // (**it).stampa(); // (*it) è un puntatore il cui tipo e' A*
        (*it)->stampa();
}

void test_B() {
    A a1(5); A a2(7);
    B b(a1);
    b.add(a1); b.add(a2);
    b.stampa();
    // B b1(A(11)); // no perchè oggetto temporaneo
};