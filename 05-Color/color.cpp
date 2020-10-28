#include "color.hpp"
#include <cstdint>
#include <string>
#include <fstream>


using namespace std;

// Definimos todas las funciones

color mezclar(const color& c1, const color& c2)
{
    color mezcla;
    mezcla.r = (c1.r + c2.r) / 2;
    mezcla.g = (c1.g + c2.g) / 2;
    mezcla.b = (c1.b + c2.b) /2;
    
    return mezcla;
}

color mezclar_desigual(const color& c1, unsigned valor1, const color& c2, unsigned valor2)
{
    color m_desigual;
    m_desigual.r = (c1.r + c2.r) / (valor1 + valor2);
    m_desigual.g = (c1.g + c2.g) / (valor1 + valor2);
    m_desigual.b = (c1.b + c2.b) / (valor1 + valor2);
    
    return m_desigual;
}

color sumar(const color& c1, const color& c2)
{
    color suma;
    suma.r = ((c1.r + c2.r) > 255) ? 255 : c1.r + c2.r;
    suma.g = ((c1.g + c2.g) > 255) ? 255 : c1.g + c2.g;
    suma.b = ((c1.b + c2.b) > 255) ? 255 : c1.b + c2.b;
    
    return suma;
}

color restar(const color& c1, const color& c2)
{
    color resta;
    resta.r = ((c1.r - c2.r) < 0) ? 0 : c1.r - c2.r;
    resta.g = ((c1.g - c2.g) < 0) ? 0 : c1.g - c2.g;
    resta.b = ((c1.b - c2.b) < 0) ? 0 : c1.b - c2.b;
    
    return resta;
}

color GetComplementario(const color& a)
{
    color complemento;
    if(a.r == red.r && a.g == red.g && a.b == red.b)
    {
        complemento = cyan;
        return complemento;
    }
    else if (a.r == green.r && a.g == green.g && a.b == green.b)
    {
        complemento = magenta;
        return complemento;
    }
    else
    {
        complemento = yellow;
        return complemento;
    }
}

string GetHtmlHex(const color& a)
{
    char hexa [7];
    sprintf(hexa, "#%02X%02X%02X", a.r, a.g, a.b);
    return hexa;
}

string GetHtmlRgb(const color& a)
{
    string red = to_string(a.r);
    string green = to_string(a.g);
    string blue = to_string(a.b);
    return "rgb(" + red + "," + green + "," + blue + ")";
}

void CrearSvgConTextoEscritoEnAltoContraste(string file, string message, const color& a)
{
    ofstream archivo;
    archivo.open(file);
    archivo << "svg xmlns = \"http://www,w3.org/2000/svg\">"
    << "rect x=\"0\" y=\"0\" height=\"30\" width=\"120\""
    << "style x=\"5\" y=\"18\" style=\"fill:" +GetHtmlRgb(a)
    << "\">" << message
    << "<\text></svg>";
}

bool IsIgual(const color& a, const color& b)
{
    if(a.r == b.r && a.g == b.g && a.b == b.b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

