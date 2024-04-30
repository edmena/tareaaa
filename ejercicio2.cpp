#include <iostream>

using namespace std;

#define MAXIMO 3

int matriz[MAXIMO][MAXIMO];
int fila_actual = 0;
int columna_actual = 0;

void añadir(int num);
void mostrar();

int main(int argc, char const *argv[]) {
    int num;
    for(int i = 0; i < MAXIMO; i++) {
        for(int j = 0; j < MAXIMO; j++) {
            cout << "Dime un número: ";
            cin >> num;
            añadir(num);
        }
    }
    mostrar();
    return 0;
}

void añadir(int num){
    matriz[fila_actual][columna_actual] = num;
    columna_actual++;
    if(columna_actual == MAXIMO){
        fila_actual++;
        columna_actual = 0;
    }
}

void mostrar() {
    cout << "Matriz:" << endl;
    for(int i = 0; i < MAXIMO; i++) {
        for(int j = 0; j < MAXIMO; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
