/*
// Materia: ProgramaciC3n I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 05/11/2024
// Numero de ejercicio: 7
// Problema planteado: Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38,
49,..., para n términos.
*/
#include <iostream>
using namespace std;

int sumaDigitos(int numero)
{
    if (numero == 0) return 0;
    return (numero % 10) + sumaDigitos(numero / 10);
}

int generarSecuencia(int secuencia[], int n, int indice)
{
    if (indice >= n) return 0;

    if (indice == 0) 
    {
        secuencia[indice] = 1;
    } else if (indice == 1)
    {
        secuencia[indice] = 1;
    } else if (indice == 2) 
    {
        secuencia[indice] = 2;
    } else if (indice == 3)
    {
        secuencia[indice] = 4;
    } else if (indice == 4) 
    {
        secuencia[indice] = 8;
    } else if (indice == 5)
    {
        secuencia[indice] = 16;
    } else {
        secuencia[indice] = secuencia[indice - 1] + sumaDigitos(secuencia[indice - 1]);
    }

    return generarSecuencia(secuencia, n, indice + 1);
}

int main() 
{
    int n;
    cout << "Ingresa el numero de terminos ";
    cin >> n;

    int secuencia[n];
    generarSecuencia(secuencia, n, 0);

    cout << "Secuencia ";
    for (int i = 0; i < n; i++) 
    {
        cout << secuencia[i] << " ";
    }
    cout << endl;

    return 0;
}
