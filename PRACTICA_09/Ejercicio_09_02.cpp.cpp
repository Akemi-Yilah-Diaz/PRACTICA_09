/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 05/11/2024
// Numero de ejercicio: 2
// Problema planteado: Implementa una función recursiva para calcular la potencia de un número.
La función debe recibir dos parámetros, la base a y el exponente n, y
devolver el valor de a^n. Evita usar la función pow de la biblioteca
estándar. Por ejemplo, potencia(2, 3) debería devolver 8.
*/
#include <iostream>
using namespace std;

int potencia(int a, int n)
{
    if (n == 0)
        return 1;
    return a * potencia(a, n - 1);
}

int main()
{
    int base, exponente;
    cout << "Ingresa la base ";
    cin >> base;
    cout << "Ingresa el exponente ";
    cin >> exponente;
    cout << base << "elevado" << exponente << " : " << potencia(base, exponente) << endl;
    return 0;
}
