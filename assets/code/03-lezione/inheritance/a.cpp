#include "a.h"

A::A(){
    i = 0;
    cout << "A::A()" << this << endl;
}

A::A(int _i){
    i = _i;
    cout << "A::A(int)" << this << endl;
}

A::A(const A& _a){
    i = _a.i;
    cout << "A::A(const A&)" << this << endl;
}

A::~A(){
    cout << "A::~A()" << this << endl;
}

int A::get_i()const { return i }

void test_A(){
    A a;
    cout << a.get_i();
    
    A a3(3);
    cout << a3.get_i();
    
    cout << quadrato(a3);
    cout << raddoppia(a3);
};

int quadrato(const A& _a){
    return _a.get_i() * _a.get_i();
}

int raddoppia(A _a){
    return 2 * _a.get_i();
}