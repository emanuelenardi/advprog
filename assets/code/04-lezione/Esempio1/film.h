#ifndef FILM_H
#define FILM_H

using namespace std;

#include <iostream>
#include <list>

class spettatore;

class film {
    string nome;
    list<spettatore*> ls;
public:
    film();
    film(string _s);
    friend ostream& operator<<(ostream& os, const film& _s);
    void add_spettatore(spettatore& _s);
    // void stampa_spettatori(); // lasciato per esercizio
};

ostream& operator<<(ostream& os, const film& _s);
void test_film();

#endif
