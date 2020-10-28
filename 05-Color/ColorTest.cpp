/*
    TP 04 - Color
    Nahuel Sanguineti
    K1041
    164.421-0
 */

#include <iostream>
#include "color.hpp"
#include <cassert>
using namespace std;

int main()
{
    // Pruebas Mezclar en partes iguales:
    
    assert (IsIgual (mezclar (cyan, blue), {0, 127, 255}));
    assert (not IsIgual (mezclar (black, white), green));
    
    // Pruebas Mezclar en partes desiguales:
    
    assert (IsIgual (mezclar_desigual (magenta, 50, yellow, 25), {6,3,3}));
    assert (not IsIgual (mezclar_desigual (red, 4, black, 6), yellow));
    
    // Pruebas Sumar:
    
    assert (IsIgual (sumar (green, blue), {0,255,255}));
    assert (IsIgual (sumar (cyan, cyan), cyan));
    assert (not IsIgual (sumar (yellow, blue), red));
    
    // Pruebas Restar:
    
    assert (IsIgual (restar (cyan, magenta), {0,255,0}));
    assert (IsIgual (restar (white, white), black));
    assert (not IsIgual (restar (black, white), green));
    
    // Pruebas GetComplementario:
    
    assert (IsIgual (GetComplementario (red), cyan));
    assert (IsIgual (GetComplementario (green), magenta));
    assert (IsIgual (GetComplementario (blue), yellow));
    
    // Pruebas GetHtmlHex:
    
    assert ("#79B2AE" == GetHtmlHex ({121,178,174}));
    assert ("#9C6933" == GetHtmlHex ({156,105,51}));
    assert ("#000000" == GetHtmlHex (black));
    assert (not ("#FFFFFF" == GetHtmlHex (blue)));
    
    // Pruebas GetHtmlRgb:
    
    assert (GetHtmlRgb (blue) == "rgb(0,0,255)");
    assert (GetHtmlRgb (cyan) == "rgb(0,255,255)");
    assert (GetHtmlRgb (green) == "rgb(0,255,0)");
    
    // Pruebas CrearSvgConTexto(...):
    
    CrearSvgConTextoEscritoEnAltoContraste("prueba1.svg", "Nahuel Sanguineti", blue);
    CrearSvgConTextoEscritoEnAltoContraste("prueba2.svg", "Curso k1041", magenta);
    CrearSvgConTextoEscritoEnAltoContraste("prueba3.svg", "Jueves a la noche", red);
    
  
    return 0;
}
