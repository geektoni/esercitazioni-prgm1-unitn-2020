#include <iostream>
#include <cstdlib>

using namespace std;

void inizializza(int array[], int dim);
void inverti(int array[], int dim);
void stampa(const int array[], int dim);

int main() {

    srand(time(NULL));

    const int DIM = 10;
    int array[DIM];

    inizializza(array, DIM);
    stampa(array, DIM);
    inverti(array, DIM);
    stampa(array, DIM);

    return 0;
}

void inizializza(int array[], int dim) {

    for (int i = 0 ; i < dim ; i++) {
        array[i] = rand() % 10;
    }
}

// Per invertire, è sufficiente scambiare gli elementi della prima
// metà dell'array (dim/2) con l'altra metà dell'array. In questo modo
// non ci servono array ausiliari.
void inverti(int array[], int dim) {

    int temp;
    for (int i = 0; i < dim/2 ; i++) {
        temp = array[i];
        array[i] = array[dim-1-i];
        array[dim-1-i] = temp;
    }
}

void stampa(const int array[], int dim) {

    for (int i = 0 ; i < dim ; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
