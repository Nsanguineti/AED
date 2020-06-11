/*
    * TP No obligatorio: Celsius
    * Dada una temperatura en grados Farehnheit, calcular su equivalente en Celsius.
    * Nahuel Sanguineti.
    * Legajo: 164.421-0
    * 11/06/2020
*/

#include <iostream>
#include <cassert>
using namespace std;

double celsius (double farehnheit)
{
    double celsius=((5.0/9.0)*(farehnheit-32));
    return celsius;
}

bool AreNear (double real_value, double calculated_value, double tolerance)
{
    bool error;
    error=((calculated_value <= real_value + tolerance) and (calculated_value >= real_value - tolerance));
    return error ? true : false;
}

int main()
{
    cout << "Convertiremos una temperatura en grados Farehnheit en grados Celsius.\n\n";
    double temp1, temp2;
    cout << "Ingrese temperatura en Farehnheit: ";
    cin >> temp1;
    
    temp2=celsius(temp1);
    assert(AreNear(0.0, celsius(32.0), 0.0001));
    
    cout << "La temperatura de " << temp1 << "ºF, equivale a " << temp2 << "ºC.\n\n";
    
return 0;
    
}


