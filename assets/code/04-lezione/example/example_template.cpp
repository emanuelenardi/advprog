#include <string>
#include <utility>
#include <iostream>
using namespace std;

template <class T>
void my_swap(T &f, T &s) {
    T tmp = f;
    f = s;
    s = tmp;
}

int main() {
    int a = 3; int b = 4;
    cout << "before a = " << a << " b = " << b << endl;
    
    my_swap<int>(a, b);
    cout << "after a = " << a << " b = " << b << endl;
    
    string s1 = "hello"; string s2 = "world";
    cout << "before s1 = " << s1 << " s2 = " << s2 << endl;
    
    my_swap<string>(s1, s2);
    cout << "after s1 = " << s1 << " s2 = " << s2 << endl;
    
    return 0;
}