#include <iostream>

using namespace std;

void imprimirNumeros();

int main(int argc, char const *argv[])
{
    imprimirNumeros();
    return 0;
}

void imprimirNumeros() {
    for (int i = 0; i <= 9; i++) {
        cout << i << endl;
    }
}
