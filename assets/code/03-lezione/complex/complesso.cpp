#include "complesso.h"

// costruttore semplice
complesso::complesso(double _re, double _im) {
    re = _re;
    im = _im;
}

/*
complesso complesso::operator+(const complesso& _c)const {
    return complesso(re+_c.re, im+_c.im);
}

complesso complesso::operator*(const complesso& _c)const {
    return complesso(re*_c.re - im*_c.im, re*_c.im + _c.re*im);
}
*/

complesso& complesso::operator+=(const complesso& _c) {
    re += _c.re;
    im += _c.im;
    return *this;
}

// TODO implementare usando operator*
complesso& complesso::operator*=(const complesso& _c) {
    (*this) = (*this) * _c;
    return *this;
    // return (*this) * _c; // non funziona, perché?
};

complesso complesso::operator-()const {
    return complesso(-re,-im);
}

complesso operator-(const complesso& _c1, const complesso& _c2) {
    return _c1 + (-_c2);
}

complesso operator+(const complesso& _c1, const complesso& _c2) {
    return complesso(_c1.re + _c2.re, _c1.im + _c2.im);
}
  
complesso operator*(const complesso& _c1, const complesso& _c2) {
    return complesso(_c1.re*_c2.re - _c1.im*_c2.im,
                     _c1.re*_c2.im + _c2.re*_c1.im);
}

ostream& operator<<(ostream& os, const complesso& _c) {
    os << _c.re << "+" << _c.im << "i";
    return os;
}

void test_complesso() {
    complesso c3;
    cout << c3;
    cout << complesso(3,2);
    cout << complesso(3,2) + complesso(2,3) << endl;
    cout << complesso(3,2) * complesso(0,1) * complesso(0,1) << endl;
    cout << complesso(3,2) + 1;
    complesso c(3,2);
    
    cout << c + 1;
    complesso c1;
    
    cout << 1 + c << endl;
    cout << complesso(0,1) * complesso(0,1) << endl;
    cout << (c += complesso(1,1)) << endl;
    cout << (c *= complesso(0,1)) << endl;
    cout << "prova" << endl;
    cout << c << endl;
    cout << -c << endl; // meno unario
    cout << c-complesso(1,1);
}