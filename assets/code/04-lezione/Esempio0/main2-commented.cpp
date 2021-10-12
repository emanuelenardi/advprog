#include <cstdlib>
#include <iostream>

using namespace std;

#include <list>

int main(int argc, char *argv[]) {
    list<int> l;

    l.push_back(2);   // [2]
    l.push_front(3);  // [3][2]

    list<int>::iterator it; // c++98
    for (it = l.begin(); it != l.end(); ++it)
        cout << *it;

    for (auto a = l.begin(); a != l.end(); ++a)  // c++11 e successivi
        cout << *a;

    for (auto v : l)
        cout << v; // stampa gli elementi di l

    for (auto &e : l)
        e++;           // [3][2] -> [4][3]

    for (auto v : l)
        cout << v; // stampa gli elementi di l

    cout << endl
         << "______" << endl;

    cout << l.front();      // [4][3]
    cout << l.back();       // [4][3]

    l.push_back(2);         // [4][3][2]
    l.push_front(5);        // [5][4][3][2]
    cout << endl; for (auto v:l) cout << v;

    l.pop_back();           // [5][4][3]
    l.pop_front();          // [4][3]
    cout << endl; for (auto v:l) cout << v;

    l.insert(l.begin(), 7); // [7][4][3]
    cout << endl; for (auto v:l) cout << v;

    l.insert(l.begin(), l.begin(), l.end());
    cout << endl; for (auto v:l) cout << v;

    cout << endl
         << "______" << endl;

    auto a = l.cbegin();  // const_iterator
    l.push_front(8); // [8][7][4][3][7][4][3]
    l.push_front(9); // [9][8][7][4][3][7][4][3]
    cout << endl << "l:";
    for (auto v : l)
        cout << v;
    cout << endl << *a; // 7

    list<int> l2; // nuova lista "l2"
    l2.splice(l2.cbegin(), l, a, l.cend());
    cout << endl << "l:";
    for (auto v : l)
        cout << v; // l:[9][8]
    cout << endl << "l2:";
    for (auto v : l2)
        cout << v; // l2:[7][4][3][7][4][3]

    l2.swap(l); // scambio le liste
    cout << endl << "l:";
    for (auto v : l)
        cout << v; // l:[7][4][3][7][4][3]
    cout << endl << "l2:";
    for (auto v : l2)
        cout << v; // l2:[9][8]

    cout << endl << "______" << endl;

    cout << l.size();  // 6
    cout << l.empty(); // 0 -> false

    l.reverse(); // l: [3][4][7][3][4][7]
    cout << endl << "l:"; for (auto v:l) cout << v;

    l.sort();    // l:[3][3][4][4][7][7]
    cout << endl << "l:"; for (auto v:l) cout << v;

    l.unique();  // l:[3][4][7]
    cout << endl << "l:"; for (auto v:l) cout << v;

    l2.sort();   // l:[3][4][7][8][9]
    l.merge(l2); // l2:[]

    return EXIT_SUCCESS;
}
