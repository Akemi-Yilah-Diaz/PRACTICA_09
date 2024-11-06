/*
// Materia: ProgramaciC3n I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 05/11/2024
// Numero de ejercicio: 8
// Problema planteado: ealizar un algoritmo recursivo, dado un vector de números enteros,
retorne la suma de sus elementos.
*/
#include <iostream>
#include <vector>
using namespace std;

int suma(vector<int> numeros, int indice) 
{
    if (indice < 0) return 0;
    return numeros[indice] + suma(numeros, indice - 1);
}

int main() 
{
    int n;
    cout << "Ingresa el numero de elementos ";
    cin >> n;

    vector<int> numeros(n);
    cout << "Ingresa los elementos del vector\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> numeros[i];
    }

    int sumaTotal = suma(numeros, n - 1);
    cout << "La suma de los elementos es " << sumaTotal << endl;

    return 0;
}
