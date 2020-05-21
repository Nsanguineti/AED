/*
    Ejemplos de valores y operaciones de Tipos de Datos.
    Objetivo: mediante un ejemplo, demostramos la aplicación de los distintos tipos de datos.
    Nahuel Sanguineti.
    20/05/2020
*/

#include <iostream>
#include <assert.h>
using namespace std;

int main ()
{
    // Tipo de dato 'char'
    
    char c1 = 'A';
    char c2 = '!';
    char c3 = '0';
    
    cout << "Algunos ejemplos de variables del tipo 'char' (caracter) pueden ser: " << c1 << ", " << c2 << " o " << c3 << ".\n";
    cout << "Los valores positivos de tipo 'char' están relacionados con la tabla de caracteres ASCII.\n\n";
    
    
    // Tipo de dato 'int'
    
    int i1 = 2;
    int i2 = -45;
    int i3= 32;
    
    int suma = i1+i3;
    int resta = i2-i1;
    int multiplicación = i1*i2;
    
        assert(suma==34);
        assert(resta==-47);
        assert(multiplicación==-90);
    
    cout << "Algunas variables de tipo 'int' (número entero) son: " << i1 << ", " << i2 << ", " << i3 << ".\n";
    cout << "Las operaciones con este tipo de dato son la suma, resta y multiplicación, donde su resultado siempre será un número entero, y la división, donde puede no ser un resultado exacto, debido a que si el resultado posee decimales, el programa redondeará a un número entero el resultado final.\n";
    cout << "Ejemplos de estas operaciones:\n\n";
    cout << "La suma entre " << i1 << " y " << i3 << " es: " << suma << endl;
    cout << "La resta entre " << i2 << " y " << i1 << " es: " << resta << endl;
    cout << "La multiplicación entre " << i1 << " y " << i2 << " es: " << multiplicación << endl << endl;
    
    cout << "En el caso de la división, el resultado puede no ser exacto, debido a que el resultado de la división entre dos números enteros no siempre es un número entero.\n\n";
    
    // Tipo de dato 'unsigned'
    
    unsigned  u1 = 4;
    unsigned  u2 = 10;
    unsigned  u3 = 532432420;
    

    cout << "El tipo de dato 'unsigned' indica que la variable solo permite números positivos.\n";
    cout << "Algunos ejemplos son: " << u1 << ", " << u2 << " o " << u3 << ".\n";
    cout << "Las operaciones son las mismas que el tipo de dato unsigned en el que se esté trabajando.\n\n";
    
    // Tipo de dato 'double'
    
    double d1 = 3;
    double d2 = -4.;
    double d3 = 43;
    
    double d_suma = d1+d2;
    double d_resta = d3-d2;
    double d_mult = d1*d3;
    double d_div = d3/d2;
    
        assert(d_suma==-1);
        assert(d_resta==47);
        assert(d_mult==129);
        assert(d_div==-10.75);

    cout << "El tipo de dato 'double' permite utilizar variables con valores decimales.\n";
    cout << "Algunos ejemplos de este tipo son: " << d1 << ", " << d2 << " y " << d3 << ".\n";
    cout << "Las operaciones son las mismas que con el tipo de dato 'int', con la diferencia de que, en este caso, la división va a dar un número exacto, algo que no p]siempre pasaba si dividíamos dos variables del tipo 'int'.\n";
    cout << "Algunas operaciones:\n";
    cout << "La suma entre " << d1 << " y " << d2 << " es: " << d_suma << endl;
    cout << "La resta entre " << d3 << " y " << d2 << " es: " << d_resta << endl;
    cout << "El producto entre " << d1 << " y " << d3 << " es: " << d_mult << endl;
    cout << "La división entre " << d3 << " y " << d2 << " es: " << d_div << endl << endl;
    
    
    // Tipo de dato 'bool'
    
    bool verdadero = true;
    bool falso = false;
    
    cout << "El tipo de dato Booleano (o Bool) contiene dos posibles valores: " << verdadero << " y " << falso << ".\n";
    cout << "En algunos libros puede aparecer " << verdadero << " como 'true' y " << falso << " como 'false'.\n";
    cout << "Se utiliza para representar valores de verdad en determinadas situaciones o problemas.\n\n";

    
    // Tipo de dato 'string'
    
    string s1 = "Hola. ";
    string s2 = "Buen dia!";
    string s3 = "Chau.";
    string concatenar = s1+s2;
    
    assert(concatenar=="Hola. Buen dia!");
    
    cout << "El tipo de dato 'string' es una secuencia (o cadena) ordenada de caracteres.\n";
    cout << "Unos ejemplos pueden ser:\n" << s1 << endl << s2 << endl << s3 << endl << endl;
    cout << "Dentro las operaciones entre cadenas, podemos destacar la concatenación y la comparación de cadenas, aunque éstas son algunas de las muchas operaciones que se pueden hacer con las mismas.\n";
    cout << "Concatenar es unir dos cadenas. Por ejemplo: si unimos '" << s1 <<"' con '" << s2 << "', entonces la concatenación quedaría: " << concatenar << endl;
    cout << "Comparar cadenas es corroborar si éstas son iguales o distintas.\n\n";
    
}

