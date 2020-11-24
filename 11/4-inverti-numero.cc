#include <iostream>
#include <cmath>

using namespace std;

int invertiNumero(int numero, int & contatore);

int main() {

    int numero, contatore = 0;

    cout << "Inserisci un numero: ";
    cin >> numero;

    cout << "Il numero inverso è " << invertiNumero(numero, contatore) << endl;

    return 0;
}

int invertiNumero(int numero, int & contatore) {

    int numeroInverso;

    if (numero == 0) {
        numeroInverso = 0;
    }
    else {
        int temp;
        numeroInverso = numero % 10;
        temp = invertiNumero(numero/10, contatore);
        numeroInverso *= pow(10, contatore);
        contatore++;
        numeroInverso += temp;
    }

    return numeroInverso;
}

