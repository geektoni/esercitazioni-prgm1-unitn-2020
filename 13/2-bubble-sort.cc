#include <iostream>

using namespace std;

void inizializza(int array[], int dim);
void stampa(const int array[], int dim);
void bubblesort(int array[], int dim);

int main() {

    const int DIM = 10;
    int array[DIM];

    srand(time(NULL));

    inizializza(array, DIM);
    stampa(array, DIM);
    bubblesort(array, DIM);
    stampa(array, DIM);

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