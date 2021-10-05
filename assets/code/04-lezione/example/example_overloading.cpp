#include <iostream>
#include <string>
#include <utility>
using namespace std;

// scambio fra interi
void my_swap(int &f, int &s) {
    int tmp = f;
    f = s;
    s = tmp;
}

// scambio fra stringhe
void my_swap(string &f, string &s) {
    string tmp = f;
    f = s;
    s = tmp;
}

int main() {
    // esempio scambio fra stringhe
    string a, b;
    a = "hello";
    b = "world";
    
    cout << "before a = " << a << " b = " << b << endl;
    // a = hello, b = world
    my_swap(a, b);
    cout << "after a = " << a << " b = " << b << endl;
    // a = world, b = hello

    // esempio scambio fra interi    
    int x, y;
    x = 33;
    y = 44;

    cout << "before x = " << x << " y = " << y << endl; // x = 33, y = 44
    my_swap(x, y);
    cout << "after x = " << x << " by = " << y << endl; // x = 44, y = 33
    
    // esempio scambio fra decimali
    double d1, d2;
    d1 = 3.3;
    d2 = 4.4;
    
    cout << "before d1 = " << d1 << " d1 = " << d2 << endl;
    // my_swap(d1,d2); // compile time error
    // no know conversion from double to &int ...
    cout << "after d1 = " << d1 << " d2 = " << d2 << endl;
    
    return 0;
}
