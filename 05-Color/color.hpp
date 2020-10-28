#include <cstdint>
#include <string>
using namespace std;

struct color {uint8_t r, g, b;};    // serán los colores red, green & blue en formato RGB.

// Declaro todos los colores solicitacos. Los códigos de los colores fueron buscados en internet.

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

// Prototipos de funciones :
color mezclar(const color&, const color&);                      //  Mezcla dos colores en partes iguales.
color mezclar_desigual(const color&, unsigned, const color&, unsigned);   //  Mezcla dos colores en partes desiguales.
color sumar(const color&, const color&);                        //  Suma la intensidad de cada canal entre dos colores.
color restar(const color&, const color&);                       //  Resta la intensidad de cada canal entre dos colores.
color GetComplementario(const color&);                          //  Retorna el color complementario al color ingresado.
                                                                //  Para Red <-> Cyan. Green <-> Magenta. Blue <-> Yellow.
string GetHtmlHex(const color&);                                //  Genera la representación en Hexa para HTML de un color.
string GetHtmlRgb(const color&);                               // Genera la representación en RGB para HTML de un color.
void CrearSvgConTextoEscritoEnAltoContraste(string, string, const color&);
bool IsIgual(const color&, const color&);                       // retorna true si un color es igual a otro, sino retorna false.



