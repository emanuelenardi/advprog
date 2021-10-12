#include <cstdlib>
#include <iostream>

using namespace std;

#include "cineteca.h"
#include "film.h"
#include "spettatore.h"

int main(int argc, char *argv[]) {
    test_film();
    test_spettatore();
    test_cineteca();
    system("PAUSE");
    return EXIT_SUCCESS;
}
