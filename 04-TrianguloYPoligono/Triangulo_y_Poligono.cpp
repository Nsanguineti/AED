/*
    • Triángulo y polígono
    • Definir el tipo de dato 'triángulo' y el tipo de dato 'polígono'. El primero está formado por 3 puntos, mientras que el segundo está formado por 'n' puntos, con una cantidad máxima de los mismos.
    • Nahuel Sanguineti
    • Legajo: 164.421-0
    • 02/09/2020
 */

#include <iostream>
#include <array>
#include <cassert>
using namespace std;

// declaro los structs

enum struct Color {amarillo, rojo, azul, verde, naranja, gris, blanco, negro};

struct Punto {double x, y;};
struct Triangulo {array <Punto,3> PuntosTriangulo; Color color_triangulo;};
struct Poligono
{
    unsigned n;
    array <Punto, 15> PuntosPoligono;
    Color color_poligono;
};

// declaro las funciones de cambio de color

// Color del triangulo
void asigno_color_triangulo( Triangulo cualquier_triangulo, Color cualquier_color_triangulo)
{
    cualquier_triangulo.color_triangulo=cualquier_color_triangulo;
}

// Color del poligono
void asigno_color_poligono( Poligono cualquier_poligono, Color cualquier_color_poligono)
{
    cualquier_poligono.color_poligono=cualquier_color_poligono;
}


int main()
{
    Triangulo t1 { {{ {1,0}, {2,1}, {3,3} }}, Color::naranja};
    Poligono p1 {5, {{ {0,0}, {1,2}, {3,4}, {5,5}, {2,0} }}, Color::azul};
    
    asigno_color_triangulo(t1, Color::rojo);
    
    asigno_color_poligono(p1, Color::amarillo);
    
    
    return 0;
}


