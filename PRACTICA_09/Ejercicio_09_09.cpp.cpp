/*
// Materia: ProgramaciC3n I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 05/11/2024
// Numero de ejercicio: 9
// Problema planteado:Realizar un algoritmo recursivo para comparar si dos vectores son iguales
*/
#include <iostream>
#include <vector>
using namespace std;

bool compararVectores(vector<int> vec1, vector<int> vec2, int indice) 
{
    if (indice == vec1.size()) return true;
    if (vec1[indice] != vec2[indice]) return false;
    return compararVectores(vec1, vec2, indice + 1);
}

int main() 
{
    int n;
    cout << "Ingresa el numero de elementos para los vectores ";
    cin >> n;

    vector<int> vec1(n), vec2(n);
    cout << "Ingresa los elementos del primer vector\n";
    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }

    cout << "Ingresa los elementos del segundo vector\n";
    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }

    if (compararVectores(vec1, vec2, 0))
    {
        cout << "Los vectores son iguales\n";
    } else 
    {
        cout << "Los vectores son diferentes\n";
    }

    return 0;
}
