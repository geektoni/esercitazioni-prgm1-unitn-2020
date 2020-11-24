#include <iostream>
#include <cstdlib>

using namespace std;

void inizializza(int array[], int dim);
void stampa(const int array[], int dim);
void mediaMaxMin(const int array[], int dim);

int main() {

    const int dim = 10;
    int array[dim];

    srand(time(NULL));

    inizializza(array, dim);
    stampa(array, dim);
    mediaMaxMin(array, dim);

    return 0;
}

void inizializza(int array[], int dim) {

    for (int i = 0; i<dim; i++) {
        array[i] = rand() % 10;
    }
}

void stampa(const int array[], int dim) {

    for (int i = 0 ; i < dim ; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void mediaMaxMin(const int array[], int dim) {

    double media = 0;
    int max = array[0];
    int min = max;

    for (int i = 0 ; i < dim ; i++) {

        int valore = array[i];
        media += valore;

        if (valore > max) {
            max = valore;
        }
        if (valore < min) {
            min = valore;
        }
    }

    cout << "Il valore massimo è " << max << endl;
    cout << "Il valore minimo è " << min << endl;
    cout << "La media è " << media/dim << endl;
}

