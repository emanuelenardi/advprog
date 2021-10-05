#ifndef COMPLESSO
#define COMPLESSO

#include <iostream>
using namespace std;

class complesso{
      double re,im;
      public:
      complesso(double _re=0,double _im=0);
    //  complesso operator+(const complesso& _c)const;
    //  complesso operator*(const complesso& _c)const;
      complesso& operator+=(const complesso& _c);
      complesso& operator*=(const complesso& _c);
      // definire meno unario
      complesso operator-()const;
      friend ostream& operator<<(ostream& os, const complesso& _c);
      friend complesso operator+(const complesso& _c1, const complesso& _c2);
      friend complesso operator*(const complesso& _c1, const complesso& _c2);
      friend complesso operator-(const complesso& _c1, const complesso& _c2);
      
      };
      complesso operator+(const complesso& _c1, const complesso& _c2);
      complesso operator*(const complesso& _c1, const complesso& _c2);
      complesso operator-(const complesso& _c1, const complesso& _c2);
      

ostream& operator<<(ostream& os, const complesso& _c);

void test_complesso();

#endif
