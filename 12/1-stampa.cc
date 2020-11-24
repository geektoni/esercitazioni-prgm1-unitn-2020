#include <iostream>
#include <cstdlib>

using namespace std;

void inizializza(int array[], int dim);
void stampa(const int array[], int dim);

int main() {

    const int DIM = 10;
    int array[DIM];

    srand(time(NULL));

    inizializza(array, DIM);
    stampa(array, DIM);

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
