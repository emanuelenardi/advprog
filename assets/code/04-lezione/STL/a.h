#ifndef CLASS_A
#define CLASS_A

#include <iostream>
using namespace std;

class A {
    int i;

public:
    A(int _i);
    void stampa();
    friend ostream &operator<<(ostream &os, const A &_a);
    bool operator<(const A &_a) const;
};

ostream &operator<<(ostream &os, const A &_a);

#endif