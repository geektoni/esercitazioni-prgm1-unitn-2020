#include <iostream>
#include <cstdlib>

using namespace std;

void inizializza(int array[], int dim);
void stampa(const int array[], int dim);
int uguaglianza(const int array1[], const int array2[], int dim);

int main() {

    srand(time(NULL));

    const int DIM = 10;
    int array1[DIM];
    int array2[DIM];

    inizializza(array1, DIM);
    inizializza(array2, DIM);
    stampa(array1, DIM);
    stampa(array2, DIM);

    cout << "Ci sono " << uguaglianza(array1, array2, DIM) << " numeri uguali negli stessi indici" << endl;

    return 0;
}

void inizializza(int array[], int dim) {

    for (int i = 0 ; i < dim ; i++) {
        array[i] = rand() % 10;
    }
}

void stampa(const int array[], int dim) {

    for (int i = 0 ; i < dim ; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int uguaglianza(const int array1[], const int array2[], int dim) {
    
    int uguali = 0;
    for (int i = 0 ; i < dim ; i++) {
        if (array1[i] == array2[i]) {
            uguali++;
        }
    }
    return uguali;
}