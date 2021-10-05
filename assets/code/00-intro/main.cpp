#include <cstdlib>
#include <iostream>

using namespace std;

#include "A.h"
#include "B.h"

int main(int argc, char *argv[]) { // cosa posso fare con una classe vuota?
    A a; // costruttore a zero parametri
    cout << a.get_i() << endl;
    A a1; //
    cout << a1.get_i() << endl;
    a1 = a; // l'operatore di assegnazione operator=
    cout << a1.get_i() << endl;
    A a2(a); // costruttore di copia
    cout << a2.get_i() << endl;
    A *pa = new A(a);
    cout << pa->get_i() << endl;
    delete pa; // distruttore
    B b("prova");
    cout << b.get_s();
    A a3(1, "prova1");
    cout << a3.get_i() << a3.get_s();
    cout << a2.get_s();
    a3.set_s("cambiato");
    a2.set_s("Amilcare");
    cout << a3.get_s();
    cout << a2.get_s();
    a3 = a2;
    cout << a3.get_s();
    a2.set_s("Alfredo");
    cout << endl;
    cout << a2.get_s();
    cout << a3.get_s();
    system("PAUSE");
    return EXIT_SUCCESS;
}