#include <iostream>
using namespace std;

#define MAXIMO 1000

int numeros[MAXIMO];
int posicion = 0;

void agregarNumero(int numero){
    if(posicion < MAXIMO){
        numeros[posicion] = numero;
        posicion++;
    }else{
        cout << "No se pueden agregar más números\n";
    }
}
