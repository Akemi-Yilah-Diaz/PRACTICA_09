/*
// Materia: ProgramaciC3n I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 05/11/2024
// Numero de ejercicio: 4
// Problema planteado: Crea una funcion recursiva que reciba una cadena y devuelva la misma
cadena invertida. Por ejemplo, si la cadena es "recursion", la funcion debe
devolver "nC3isrucre". La recursiC3n debe trabajar sobre subcadenas hasta
Escribe una función recursiva que reciba un vector de enteros y un número
a buscar, y devuelva true si el número se encuentra en el vector o false en
caso contrario. La función debe ir recorriendo el vector desde el primer
elemento hasta el último usando recursión.
que el proceso estC) completo.
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

bool buscarNumero(const vector<int>& vec, int numero, int n) {
    if (n == 0) 
        return false;
    if (vec[n - 1] == numero) 
        return true;
    return buscarNumero(vec, numero, n - 1);
}

int main() {
    srand(time(0)); 
    vector<int> vec(10); 
    
    for (int i = 0; i < vec.size(); i++) {
        vec[i] = rand() % 100 + 1; 
    }

    int numero;
    cout << "Ingresa el numero a buscar ";
    cin >> numero;

    cout << "Vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    if (buscarNumero(vec, numero, vec.size()))
        cout << "El numero " << numero << " se encuentra en el vector" << endl;
    else
        cout << "El numero " << numero << " no se encuentra en el vector" << endl;

    return 0;
}
