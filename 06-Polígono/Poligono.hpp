/*
    Nahuel Sanguineti
    K1041 - 164.421-0
 */

#include <array>
using namespace std;

struct punto {double x, y;};

struct color {uint8_t r,g,b;};

struct poligono
{
    unsigned n;
    array <punto, 15> puntos_poligono;
    color color_poligono;
};

// Colores primarios
const color red {255,0,0};
const color green {0,255,0};
const color blue {0,0,255};
//Colores secundarios
const color cyan {0,255,255};
const color magenta {255,0,255};
const color yellow {255,255,0};
//Color negro y color blanco
const color black {0,0,0};
const color white {255,255,255};


// Funciones polígono

void AddVertice (poligono&, punto&);
punto GetVertice (const poligono&, const unsigned&);
void SetVertice (poligono&, const unsigned&, const punto&);
void RemoveVertice (poligono&); // Elimina el punto ingresado en el último lugar del poligono ingresado como argumento
unsigned GetCantidadLados (const poligono&);
double GetPerimetro (const poligono&);

// Funciones punto

double GetDistancia (const punto&, const punto&);
bool IsIgualPunto (const punto&, const punto&);

// Funciones color

bool  IsIgualColor (const color&, const color&);
