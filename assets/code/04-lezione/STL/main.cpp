#include <cstdlib>
#include <iostream>

using namespace std;

#include <list>
#include <set>

template <class E>
E min2(E e1, E e2) {
   if (e1 < e2)
      return e1;
   else
      return e2;
}

template <class E>
class lista {
   list<E> le; // è un trucco...
public:
   void accoda(E e) { le.push_back(e); };
   void saltacoda(E e) { le.push_front(e); };
   void stampa();
};

template <class E>
void lista<E>::stampa() {
   typename list<E>::iterator it;
   for (it = le.begin(); it != le.end(); it++)
      cout << *it;
}

#include "b.h"
int main(int argc, char *argv[]) {
   cout << min2(3, 2);
   lista<int> la;
   la.accoda(3);
   la.saltacoda(3);
   la.stampa();
   test_B();
   cout << min2(A(13), A(17)); // ci sono due errori

   set<A> sa;
   sa.insert(A(1)); sa.insert(A(2));
   sa.insert(A(5)); sa.insert(A(2));
   set<A>::iterator it;
   for (it = sa.begin(); it != sa.end(); it++)
      cout << *it;
   A a1(1);
   set<B> sb;
   // sb.insert(a1); cosa devo fare? lasciato per esercizio

   return EXIT_SUCCESS;
}