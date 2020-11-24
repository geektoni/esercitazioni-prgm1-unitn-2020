#include <iostream>

using namespace std;

void stampaBinario(int numero);

int main() {

    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    stampaBinario(numero);
    return 0;
}

void stampaBinario(int numero) {

    if (numero != 0) {
        stampaBinario(numero / 2);
        cout << numero % 2;
    }
}