#include <iostream>

using namespace std;

void inizializza(int array[], int dim);
void stampa(const int array[], int dim);
void bubblesort(int array[], int dim);
int ricercaBinaria(const int array[], int indiceBasso, int indiceAlto, int numero);

int main() {

    const int DIM = 10;
    int array[DIM];

    srand(time(NULL));

    inizializza(array, DIM);
    stampa(array, DIM);
    bubblesort(array, DIM);
    stampa(array, DIM);

    int numero;
    cout << "Inserisci l'elemento da cercare: ";
    cin >> numero;
    cout << "L'indice è " << ricercaBinaria(array, 0, DIM, numero) << endl;

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

void bubblesort(int array[], int dim) {

    for (int i = 0 ; i< dim ; i++) {
        for (int j = 0; j < dim-1-i; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
}

int ricercaBinaria(const int array[], int indiceBasso, int indiceAlto, int numero) {

    int valoreDiRitorno = -1, indiceMedio;

    if (indiceAlto >= indiceBasso) {

        indiceMedio = (indiceAlto + indiceBasso) / 2;

        if (array[indiceMedio] == numero) {
            valoreDiRitorno = indiceMedio;
        }
        else if (array[indiceMedio] > numero) {
            valoreDiRitorno = ricercaBinaria(array, indiceBasso, indiceMedio - 1, numero);
        }
        else {
            valoreDiRitorno = ricercaBinaria(array, indiceMedio+1, indiceAlto, numero);
        }
    }

    return valoreDiRitorno;
}