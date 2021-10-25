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

    // Utilizzando la funzione modulo, andiamo ad estrarre i singoli
    // valori dal numero. Dividendo per 10, andiamo ad ottenere, prima
    // le unità, poi le decine, etc.
    //
    // 134 % 10 = 4,    134/10 = 13
    // 13 % 10 = 3,     13/10 = 1
    // 1 % 10 = 1
    //
    // Allo stesso tempo, sommiamo questi valori ad una nuova variabile,
    // moltiplicando la stessa per 10 ad ogni iterazione. Così facendo,
    // noi andremo, di fatto, ad invertire il numero.

    while (numero != 0) {
      int cifra = numero % 10;
      numero = numero / 10;

      numeroInvertito *= 10;
      numeroInvertito += cifra;
    }
    return numeroInvertito;
}
