#include <iostream>
using namespace std;

#define MAX 100

int vector[MAX];
int pos = 0;

void agregar(int num);
void mostrar();

int main() {
    int cant, num;

    cout << "Ingrese la cantidad de numeros a almacenar: ";
    cin >> cant;

    for (int i = 0; i < cant; i++) {
        cout << "Dime un #: ";
        cin >> num;
        agregar(num);
    }

    cout << "Mostrar numeros \n";
    mostrar();

    return 0;
}

void agregar(int num) {
    if (pos < MAX) {
        vector[pos] = num;
        pos++;
    } else {
        cout << "No se pueden agregar más numeros. El limite ha sido alcanzado." << endl;
    }
}

void mostrar() {
    for (int i = 0; i < pos; i++) {
        cout << vector[i] << endl;
    }
}