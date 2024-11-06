/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 04/11/2024
// Numero de ejercicio: 1
// Problema planteado: Escribe una función recursiva que reciba un número entero positivo y
devuelva la suma de sus dígitos. Por ejemplo: para el número 1234, el
resultado debería ser 10 (1 + 2 + 3 + 4).
// Problema planteado:
*/
#include <iostream>
using namespace std;

int sumadigitos(int num)
{
    if (num < 10)
        return num;
    return (num % 10) + sumadigitos(num / 10);
}

int main() 
{
    int num;
    cout << "Ingresa un numero ";
    cin >> num;
    cout << "La suma de los digitos es" << sumadigitos(num) << endl;
    return 0;
}
