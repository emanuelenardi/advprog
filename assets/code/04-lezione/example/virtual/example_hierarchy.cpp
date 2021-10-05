#include <string>
#include <utility>
#include <iostream>
using namespace std;

#include "B.h"

void my_swap(A &f, A &s) {
    A *temp = f.clone();
    f = s;
    s = *temp;
    delete temp;
}

int main() {
    B x(33);
    B y(44);
    cout << x << y << endl;
    
    my_swap(x, y);
    cout << x << y << endl;
    return 0;
}