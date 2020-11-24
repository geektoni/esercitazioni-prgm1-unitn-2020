#include <iostream>

using namespace std;

int stampaInverso(int numero);

int main() {

    int numero;
    cout << "Inserisci un numero intero: ";
    cin >> numero;

    cout << stampaInverso(numero) << endl;

    return 0;
}

int stampaInverso(int numero) {
    int numeroInvertito = 0;

    while (numero >= 1) {
        numeroInvertito *= 10;
        numeroInvertito += numero % 10;
        numero = numero / 10;
    }
    return numeroInvertito;
}