/*
// Materia: ProgramaciC3n I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 05/11/2024
// Numero de ejercicio: 5
// Problema planteado: Implementa una función recursiva que devuelva el enésimo número en la
secuencia de Fibonacci. La secuencia de Fibonacci es una serie de
números donde cada núúmero es la suma de los dos anteriores,
comenzando con 0 y 1.
*/
#include <iostream>
using namespace std;

int fibonacci(int n) 
{
	return n == 0 ? 0 : (n == 1 ? 1 : fibonacci(n - 1) + fibonacci(n - 2));
}

int main() 
{
	int n;
	cout << "Ingresa el valor de n ";
	cin >> n;
	cout << n << "es numero en la secuencia Fibonacci" << fibonacci(n) << endl;
	return 0;
}
