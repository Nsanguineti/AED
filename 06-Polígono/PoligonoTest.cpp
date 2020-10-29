/*
    TP #06-Tipo Poligono
    Demostrar capacidad de construcción de tipos compuestos basados en otros tipos compuestos.
    Nahuel Sanguineti - K1051 - 164.421-0
 */

#include <iostream>
#include <cassert>
#include "Poligono.hpp"
using namespace std;

int main()
{
    poligono poligono1 {4, {{{0,4},{2,3},{0,1},{0,0},{1,5}}}, green};
    poligono poligono2 {3, {{{0,1}, {1,2}, {2,2}}}, blue};
    poligono poligono3 {2, {{{2,2}, {1,1}}}, black};
    
    // P R U E B A S
    
    punto punto1 {1,2};
    punto punto2 {1,5};
    AddVertice(poligono1, punto1);
    AddVertice(poligono3, punto2);
    
    assert ((1 == poligono1.puntos_poligono[poligono1.n].x && 2 == poligono1.puntos_poligono[poligono1.n].y));
    assert ((1 == poligono3.puntos_poligono[poligono3.n].x && 5 == poligono3.puntos_poligono[poligono3.n].y));
    
    GetVertice(poligono2, 2);
    GetVertice(poligono1, 5);
    
    assert (IsIgualPunto(poligono2.puntos_poligono[2], GetVertice(poligono2,2)));
    assert (IsIgualPunto(poligono1.puntos_poligono[5], GetVertice(poligono1, 5)));
    assert (not IsIgualPunto(poligono2.puntos_poligono[1], GetVertice(poligono2, 0)));
    
    SetVertice(poligono1, 2, {2,5});
    SetVertice(poligono3, 0, {0,0});
    
    assert (IsIgualPunto(poligono1.puntos_poligono[2], {2,5}));
    assert (IsIgualPunto(poligono3.puntos_poligono[0], {0,0}));
    assert (not IsIgualPunto(poligono2.puntos_poligono[2], {1.5,2}));
    
    RemoveVertice(poligono2);
    
    assert (GetCantidadLados(poligono2) == 2);
    assert (GetCantidadLados(poligono3) != 5);
    assert (GetCantidadLados(poligono1) == 5);
    
    
    assert (GetPerimetro(poligono2)  != 4);
    assert (GetPerimetro(poligono3) < 13.1);
    
    assert (not IsIgualColor(poligono1.color_poligono, poligono2.color_poligono));
    assert (IsIgualColor(poligono1.color_poligono, poligono1.color_poligono));
    assert (not IsIgualColor(blue, black));
    assert (IsIgualColor(green, green));
    assert (IsIgualColor(yellow, {255,255,0}));
    assert (not IsIgualColor(white, {255,255,254}));
            
    return 0;
}
