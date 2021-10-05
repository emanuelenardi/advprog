#include "A.h"

A::A() {
    i = 0;
    pb = NULL;
    cout << "costruttore a zero parametri" << endl;
};

A::A(int _i, string _s) {
    i = _i;
    pb = new B(_s);
    cout << "costruttore a due parametri" << endl;
};

A::A(const A & _a) {
    i = _a.i;
    if (_a.pb != NULL)
        pb = new B( * (_a.pb));
    else
        pb = NULL;
    cout << "costruttore di copia" << endl;
};

A & A::operator = (const A & _a) {
    if (this -> pb == NULL) { //oggetto chiamante non ha B
        if (_a.pb != NULL)
            pb = new B( * (_a.pb));
    } else //l'oggetto chiamante ha B
    {
        if (_a.pb != NULL)
            ( * pb) = * (_a.pb);
        else {
            delete pb;
            pb = NULL;
        }
    }
    return *this; // this e' un puntatore che punta all'oggetto chiamante
    cout << "operator=" << endl;
}; //a=(b=c)

A::~A() {
    if (pb != NULL)
        delete pb;
    cout << "distruttore" << endl;
};

int A::get_i() {
    return i;
};

string A::get_s() {
    if (pb != NULL)
        return pb -> get_s();
    else
        return "";
}
void A::set_s(string _s) {
    if (pb == NULL)
        pb = new B(_s);
    else
        ( * pb) = B(_s);
}