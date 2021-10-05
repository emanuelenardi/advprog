#ifndef CLASS_B
#define CLASS_B
#include <iostream>
using namespace std;
// la classe B aggrega "degli" A  (UML losanga vuota)
#include "a.h"
#include <list>
class B {
    // supponiamo che io voglia aggregare un solo A
    //     A *pa;
    // supponiamo che io voglia aggregare un numero imprecisato di A
    //     list<A> la; NO questo va bene per la composizione
    // cosa succede se l'aggregazione ha cardinalita 1,*?
    list<A *> lpa; // lista di puntatori
public:
    B(A &_a);
    void add(A &_a);
    void stampa() const;
};

void test_B();

#endif