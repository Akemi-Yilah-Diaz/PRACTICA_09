/*
// Materia: ProgramaciC3n I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 05/11/2024
// Numero de ejercicio: 6
// Problema planteado: Realizar un algoritmo recursivo para calcular el máximo común divisor de
dos números enteros aplicando el algoritmo de Euclides
*/
#include <iostream>
using namespace std;

int minComunDen(int num1, int num2) 
{
    return num2 == 0 ? num1 : minComunDen(num2, num1 % num2);
}

int main() 
{
    int numero1, numero2;
    cout << "Ingresa el primer numero ";
    cin >> numero1;
    cout << "Ingresa el segundo numero ";
    cin >> numero2;
    cout << "El maximo comun divisor es " << minComunDen(numero1, numero2) << endl;
    return 0;
}
