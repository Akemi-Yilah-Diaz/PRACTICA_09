/*
// Materia: ProgramaciC3n I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 05/11/2024
// Numero de ejercicio: 13
// Problema planteado:Realizar un algoritmo recursivo para calcular el coeficiente binomial a
partir de la lectura de dos números enteros, a partir de la relación: nm=n!n-m!*m!
*/
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int coeficienteBinomial(int n, int m)
{
    if (m > n) return 0;
    return factorial(n) / (factorial(n - m) * factorial(m));
}

int main() 
{
    int n, m;
    cout << "Ingresa dos numeros enteros n y m";
    cin >> n >> m;

    int resultado = coeficienteBinomial(n, m);
    cout << "El binomial " << n << ", " << m << " es " << resultado << endl;

    return 0;
}
