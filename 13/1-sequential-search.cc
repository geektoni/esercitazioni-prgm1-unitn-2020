#include <iostream>

using namespace std;

void inizializza(int array[], int dim);
void stampa(const int array[], int dim);
int ricercaSequenziale(const int array[], int dim, int numero);

int main() {

    const int DIM = 10;
    int array[DIM];
    int numero;

    srand(time(NULL));

    inizializza(array, DIM);
    stampa(array, DIM);

    cout << "Inserisci l'elemento da cercare: ";
    cin >> numero;
    cout << "Il numero inserito si trova in posizione " << ricercaSequenziale(array, DIM, numero) << endl;

    return 0;
}

void inizializza(int array[], int dim) {

    for (int i = 0 ; i < dim ; i++) {
        array[i] = rand() % 100;
    }
}

void stampa(const int array[], int dim) {
    
    for ( int i = 0 ; i < dim ; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int ricercaSequenziale(const int array[], int dim, int numero) {
    
    int valoreDiRitorno = -1;

    for (int i = 0 ; i < dim && valoreDiRitorno == -1 ; i++) {
        if (array[i] == numero) {
            valoreDiRitorno = i;
        }
    }

    return valoreDiRitorno;
}