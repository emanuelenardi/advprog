#include <cstdlib>
#include <iostream>

using namespace std;

#include<list>

int main(int argc, char *argv[]) {
    list<int> l;

    l.push_back(2);   // [2]
    l.push_front(3);  // [3][2]

    list<int>::iterator it; // c++98
    for (it = l.begin(); it != l.end(); ++it)
        cout << *it;

    for (auto a = l.begin(); a != l.end(); ++a) // c++11 e successivi
        cout << *a;

    for (auto v : l) cout << v;

    for (auto &e : l)
        e++;          // [3][2] -> [4][3]

    for (auto v : l) cout << v;

    cout << endl << "______" << endl;

    cout << l.front();
    cout << l.back();

    l.push_back(2);
    l.push_front(5);
    // stampa gli elementi di l

    l.pop_back();
    l.pop_front();
    // stampa gli elementi di l

    l.insert(l.begin(), 7);
    // stampa gli elementi di l

    l.insert(l.begin(), l.begin(), l.end());
    // stampa gli elementi di l

    cout << endl << "______" << endl;

    auto a = l.cbegin();  //const_iterator
    l.push_front(8);
    l.push_front(9);
    // stampa l
    cout << endl << *a;

    list<int> l2;
    l2.splice(l2.cbegin(), l, a, l.cend());
    // stampa l
    // stampa l2

    l2.swap(l);
    // stampa l
    // stampa l2

    cout << endl << "______" << endl;

    cout << l.size();
    cout << l.empty();

    l.reverse();
    // stampa l

    l.sort();
    // stampa l

    l.unique();
    // stampa l

    l2.sort();
    l.merge(l2);
    // stampa l
    // stampa l2

    cout << endl << "______" << endl;

    list<int>::reverse_iterator rit;
    for (rit = l.rbegin(); rit != l.rend(); ++rit)
        cout << *rit;

    for (auto a = l.rbegin(); a != l.rend(); ++a)
        cout << *a;

    l.resize(4);
    // stampa l

    l.remove(3);
    // stampa l

    l.erase(l.begin());
    // stampa l

    a = l.emplace(l.cbegin(), 11);
    // stampa l
    l.push_front(13);
    // stampa l

    l2.assign(a, l.cend());
    // stampa l2

    cout << endl << "______" << endl;

    list<int> l3(l);
    // stampa l3

    l = l2;
    // stampa l
    // stampa l2

    l.clear();
    // stampa l

    cout << endl << l.max_size();

    return EXIT_SUCCESS;
}
