#include <string>
#include <utility>
#include <iostream>
using namespace std;

void my_swap(void *&f, void *&s) {
    void *tmp = f;
    f = s;
    s = tmp;
}

int main() {
    void *a = new string("hello");
    void *b = new string("world");
    
    cout << *((string *)a) << *((string *)b) << endl;
    swap(a, b);
    cout << *((string *)a) << *((string *)b) << endl;
    
    void *x = new int(33);
    void *y = new int(44);
    
    cout << *((int *)x) << *((int *)y) << endl;
    my_swap(x, y);
    cout << *((int *)x) << *((int *)y) << endl;
    cout << "a = " << *((int *)a) << endl;
    // no compile time error, no runtime error
    // output a = 1919907594 :(
    
    return 0;
}
