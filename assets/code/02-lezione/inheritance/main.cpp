#include <cstdlib>
#include <iostream>

using namespace std;

// devo includere entrambe le librerie
#include "a.h"
#include "b.h"

int main(int argc, char *argv[]) {
    test_A();
    cout << endl;
    
    test_B();
    cout << "main: " << endl;
    B* pb = new B(7,"note");
    cout << quadrato(*pb);
    delete pb;
    
    cout << "puntatore ad A: " << endl;
    A* pa = new A(11);
    cout << quadrato(*pa);
    delete pa;
    
    cout << "puntatore ad A che punta ad un B:" << endl;
    pa = new B(13,"giorni");
    cout << quadrato(*pa);
    delete pa;
    
    A a;
    B b;
    a = b; // 1 12
    // b = a; non compila
    
    cout << "assegnamento ad a" << endl;
    // a = 3;
    // viene chiamato A::A(int) usato come convertitore implicito di tipo
    a = A(3);
    
    A a2(b); // cosa sto chiamando?
    
    system("PAUSE");
    return EXIT_SUCCESS;
}