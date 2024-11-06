/*
// Materia: ProgramaciC3n I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 05/11/2024
// Numero de ejercicio: 14
// Problema planteado:. Realizar un algoritmo recursivo para elaborar un programa en el que dado
un entero n > 1, calcule e imprima los elementos correspondientes a la
conjetura de Ullman (en honor al matemático Ullman) que consiste en lo
siguiente:
• Empiece con cualquier entero positivo.
• Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele
1.
• Obtenga enteros sucesivamente repitiendo el proceso.
Al final se obtendrá el número 1, independientemente del entero inicial. Por
ejemplo, cuando el entero inicial es 26, la secuencia será:
26 13 40 20 10 5 16 8 4 2 1
*/
#include <iostream>
using namespace std;

void ullman(int n)
{
    cout << n << " ";
    if (n == 1) return;
    if (n % 2 == 0)
    {
        ullman(n / 2);
    } else {
        ullman(n * 3 + 1);
    }
}

int main()
{
    int n;
    cout << "Ingresa un entero positivo mayor que 1 ";
    cin >> n;

    if (n > 1)
    {
        ullman(n);
        cout << endl;
    } else {
        cout << "El numero debe ser mayor que 1" << endl;
    }

    return 0;
}
