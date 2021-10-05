#include "a.h"

A::A(int _i) {
    i = _i;
}

void A::stampa() {
    cout << i;
}

ostream &operator<<(ostream &os, const A &_a) {
    return os << _a.i;
}

bool A::operator<(const A &_a) const {
    return (i < _a.i);
}