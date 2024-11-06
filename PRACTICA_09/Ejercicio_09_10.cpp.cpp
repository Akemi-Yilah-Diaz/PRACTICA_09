/*
// Materia: ProgramaciC3n I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 05/11/2024
// Numero de ejercicio: 10
// Problema planteado:. Realizar un algoritmo recursivo para la siguiente función:
}Q\left(n\right)=1^2+2^2+3^2+...+n^2
*/
#include <iostream>
using namespace std;

int Q(int n)
{
    if (n == 1) return 1;
    return n * n + Q(n - 1);
}

int main() 
{
    int n;
    cout << "Ingresa un numero n ";
    cin >> n;

    int resultado = Q(n);
    cout << "El valor de Q(" << n << ") es " << resultado << endl;

    return 0;
}
