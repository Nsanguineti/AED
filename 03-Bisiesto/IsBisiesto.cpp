/*
    * 03 - IsBisiesto
    * Determinar si un año es bisiesto o no.
    * Al año que sí es bisiesto, se lo denotará con un '1', mientras que el año que no lo sea, se lo denotará con un '0'.
    * Nahuel Sanguineti. Legajo 164.421-0
    * 09/06/2020
 */

#include <iostream>
#include <cassert>
using namespace std;

bool IsBisiesto (unsigned año)
    {
        return año > 1582 and  ((año%400 == 0) or ((año%4 == 0) and (año%100 != 0)));
    }

int main ()
{
    assert (IsBisiesto (2016));     // Probamos con año divisible por 4 pero no por 100.
    assert (IsBisiesto (2000));     // Probamos con año divisible por 400.
    assert (not IsBisiesto (1999));  // Probamos con año no divisible por 4 ni por 400.
    assert (not IsBisiesto (1700));  // Probamos con año divisible por 4 y por 100, pero no por 400.
    assert (not IsBisiesto (1500));  // Probamos con año menor a 1582.

    cout << IsBisiesto(2016) << endl;
    cout << IsBisiesto(2000) << endl;
    cout << IsBisiesto(1999) << endl;
    cout << IsBisiesto(1700) << endl;
    cout << IsBisiesto(1500) << endl << endl;
                          
return 0;
}

