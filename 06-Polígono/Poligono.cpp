#include "Poligono.hpp"
#include <cmath>

// Funciones polígono

void AddVertice (poligono& pol1, punto& pto1)
{
    pol1.n=pol1.n + 1;
    pol1.puntos_poligono[pol1.n].x = pto1.x;
    pol1.puntos_poligono[pol1.n].y = pto1.y;
}

punto GetVertice (const poligono& pol1, const unsigned& a)
{
    punto pto2 = pol1.puntos_poligono[a];
    return pto2;
}

void SetVertice (poligono& pol1, const unsigned& a, const punto& pto1)
{
    pol1.puntos_poligono[a].x = pto1.x;
    pol1.puntos_poligono[a].y = pto1.y;
}

void RemoveVertice (poligono& pol1)
{
    pol1.n = pol1.n - 1;
}

unsigned GetCantidadLados (const poligono& pol1)
{
    return pol1.n;
}

double GetPerimetro (const poligono& pol1)
{
    double perimetro = 0;
    for (int i = 0; i <= pol1.n; i++)
    {
        if (i < pol1.n)
        {
            perimetro = perimetro + GetDistancia(pol1.puntos_poligono[i], pol1.puntos_poligono[i + 1]);
        }
        else
        {
            perimetro = perimetro + GetDistancia(pol1.puntos_poligono[i], pol1.puntos_poligono[0]);
        }
    }
    return perimetro;
}


// Funciones punto

double GetDistancia (const punto& pto1, const punto& pto2)
{
    double a;
    a = sqrt(pow(pto2.x - pto1.x, 2.0) + pow(pto2.y - pto1.y, 2.0));
    return a;
}

bool IsIgualPunto (const punto& pto1, const punto& pto2)
{
    if  (pto1.x == pto2.x && pto1.y == pto2.y)
    {
        return true;
    }
    else
    {
        return false;
    }
}


// Funciones color

bool IsIgualColor (const color& c1, const color& c2)
{
    if (c1.r == c2.r && c1.g == c2.g && c1.b == c2.b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
