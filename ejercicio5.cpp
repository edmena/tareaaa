#include <iostream>

using namespace std;

void imprimirNumeros();

int main() {
    imprimirNumeros();
    return 0;
}

void imprimirNumeros() {
    for (int i = 99; i >= 70; i--) {
        cout << i << endl;
    }
}
