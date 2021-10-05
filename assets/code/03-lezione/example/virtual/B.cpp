#include "B.h"

B &B::operator =(const A &_b) {
    A *temp = _b.clone();
    B b(*((B *)temp));
    *this = b;
    return *this;
}

B &B::operator =(const B &_b) {
    i = _b.i;
    return *this;
}

B *B::clone() const {
    return new B(*this);
};

ostream &operator<<(ostream &os, const B &_b) { return os << _b.i; }