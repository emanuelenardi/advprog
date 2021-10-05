#include <iostream>
using namespace std;

#include "A.h"

class B : public A {
    int i;

public:
    B(int _i) { i = _i; };
    B &operator=(const A &_b);
    B &operator=(const B &_b);
    B *clone() const;
    friend ostream &operator<<(ostream &os, const B &_b);
};

ostream &operator<<(ostream &os, const B &_b);