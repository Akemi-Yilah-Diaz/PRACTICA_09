/*
// Materia: ProgramaciC3n I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 05/11/2024
// Numero de ejercicio: 11
// Problema planteado:Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
comprado una pareja de conejos para criarlos y luego venderlos. Si la
pareja de conejos produce una nueva pareja cada mes y la nueva pareja
tarda un mes más en ser también productiva, ¿cuántos pares de conejos
podrá poner a la venta el granjero al cabo de un año?
*/
#include <iostream>
using namespace std;

int conejos(int mes)
{
    if (mes == 1 || mes == 2) return 1;
    return conejos(mes - 1) + conejos(mes - 2);
}

int main() 
{
    int mes = 12;
    int resultado = conejos(mes);
    cout << "El granjero tendra " << resultado << " pares de conejos en un año" << endl;
    return 0;
}
