/*
// Materia: ProgramaciC3n I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 05/11/2024
// Numero de ejercicio: 12
// Problema planteado:Realizar un algoritmo recursivo que nos diga si una cadena de caracteres
es simétrica
*/
#include <iostream>
using namespace std;

bool simetrica(string str, int inicio, int fin)
{
    if (inicio >= fin) return true;
    if (str[inicio] != str[fin]) return false;
    return simetrica(str, inicio + 1, fin - 1);
}

int main() {
    string str;
    cout << "Ingresa una frase ";
    cin >> str;

    if (simetrica(str, 0, str.length() - 1)) 
    {
        cout << "La frase es simetrica" << endl;
    } else
    {
        cout << "La frase no es simetrica" << endl;
    }

    return 0;
}
