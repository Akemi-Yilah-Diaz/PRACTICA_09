/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 05/11/2024
// Numero de ejercicio: 3
// Problema planteado: Crea una función recursiva que reciba una cadena y devuelva la misma
cadena invertida. Por ejemplo, si la cadena es "recursión", la función debe
devolver "nóisrucre". La recursión debe trabajar sobre subcadenas hasta
que el proceso esté completo.
*/
#include <iostream>
using namespace std;

string invertircadena(string cadena, int indice = 0) 
{
    if (indice == cadena.size())
        return "";
    return invertircadena(cadena, indice + 1) + cadena[indice];
}

int main()
{
    string texto;
    cout << "ingresa una cadena ";
    cin >> texto;
    cout << "cadena invertida " << invertircadena(texto) << endl;
    return 0;
}
