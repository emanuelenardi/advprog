#include <iostream>

using namespace std;

#ifndef CLASSE_A
#define CLASSE_A

// intendo realizzare una composizione "facoltativa" cardinalità 0,1
#include "B.h"

class A {
    int i;
    B *pb; // un puntatore ma in modo diverso rispetto all'aggregazione
public:
    A();
    A(int _i, string _s);
    A(const A &_a);
    A &operator=(const A &_a); //a=(b=c)
    ~A();
    int get_i();
    string get_s();
    void set_s(string _s);
};

#endif