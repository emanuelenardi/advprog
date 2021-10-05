#ifndef CLASSE_A
#define CLASSE_A

#include<iostream>
using namespace std;
#include<string>

class A {
    int i;
public:
    A();
    explicit A(int _i);
    A(const A& _a); // non necessario ora
    virtual ~A(); // non necessario
    // ma necessario se si accede 
    // alle istanze derivate con puntatori alla classe base
    int get_i()const;
};

void test_A();
int quadrato(const A& _a); // funzione che ha un A& come parametro
int raddoppia(A _a); // passato per valore

#endif
