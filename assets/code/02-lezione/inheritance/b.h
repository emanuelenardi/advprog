#ifndef CLASSE_B
#define CLASSE_B

#include<iostream>
using  namespace std;
#include<string>

#include "a.h"

class B:public A {
    string s;
public:
    B();
    B(int _i, string _s);
    ~B(); // non è necessario
    string get_s();
};

void test_B();

#endif
