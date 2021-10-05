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
    
    cout << *(static_cast<string *>(a)) << *(static_cast<string *>(b)) << endl;
    swap(a, b);
    cout << *(static_cast<string *>(a)) << *(static_cast<string *>(b)) << endl;
    
    void *x = new int(33);
    void *y = new int(44);
    
    cout << *(static_cast<int *>(x)) << *(static_cast<int *>(y)) << endl;
    my_swap(x, y);
    cout << *(static_cast<int *>(x)) << *(static_cast<int *>(y)) << endl;
    cout << "a = " << *(static_cast<int *>(a)) << endl;
    // no compile time error, no runtime error
    // output a = 1919907594 :(
    
    return 0;
}
