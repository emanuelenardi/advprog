#ifndef CINETECA_H
#define CINETECA_H

#include <iostream>

using namespace std;

#include <map>
#include "film.h"

class cineteca {
    int cp;            // codige_progressivo
    map<int, film> m;  // contiene i film indicizzati con il codice
public:
    cineteca();
    void add_film(const film& _f);
    film get_film(int _cod);
    friend ostream& operator<<(ostream& os, const cineteca& _c);
};

ostream& operator<<(ostream& os, const cineteca& _c);
void test_cineteca();

#endif