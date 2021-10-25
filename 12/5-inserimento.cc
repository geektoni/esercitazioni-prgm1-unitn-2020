#include <iostream>
#include <cstdlib>

using namespace std;

void inizializza(int array[], int dim);
void inserisci(int array[], int dim, int elemento, int indice);
void stampa(const int array[], int dim);

int main() {

    srand(time(NULL));

    const int DIM = 10;
    int array[DIM];

    inizializza(array, DIM);
    stampa(array, DIM);

    int elemento, indice;
    cout << "Inserisci un numero da 0 a 9: ";
    cin >> elemento;
    cout << "Inserisci un indice da 0 a " << DIM << ": ";
    cin >> indice;

    inserisci(array, DIM, elemento, indice);
    stampa(array, DIM);

    return 0;
}

void inizializza(int array[], int dim) {

    for (int i = 0 ; i < dim ; i++) {
        array[i] = rand() % 10;
    }
}

void inserisci(int array[], int dim, int elemento, int indice) {

    // Per prima cosa sposto tutti gli elementi in avanti di un posto
    // (parto dall'ultimo elemento). In questo caso, l'elemento in posizione
    // dim-1 viene sovrascritto e verrà perso. Alla fine, aggiungo il nuovo
    // elemento in posizione indice.
    for (int i = dim-1 ; i > indice ; i--) {
        array[i] = array[i-1];
    }
    array[indice] = elemento;
}

void stampa(const int array[], int dim) {

    for (int i = 0 ; i < dim ; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
