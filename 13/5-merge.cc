#include <iostream>
#include <cstdlib>

using namespace std;

void inizializza(int array[], int dim);
void stampa(const int array[], int dim);
void bubblesort(int array[], int dim);
void mergeArray(const int array1 [], int dim1, const int array2 [], int dim2, int array3 []);

int main() {

    const int DIM = 10;
    int array1[DIM], array2[DIM], array3[DIM + DIM];

    srand(time(NULL));

    inizializza(array1, DIM);
    inizializza(array2, DIM);
    bubblesort(array1, DIM);
    bubblesort(array2, DIM);
    stampa(array1, DIM);
    stampa(array2, DIM);
    mergeArray(array1, DIM, array2, DIM, array3); 
    stampa(array3, DIM+DIM);

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

void mergeArray(const int array1 [], int dim1, const int array2 [], int dim2, int array3 []) {
  
    int indiceArray1 = 0;
    int indiceArray2 = 0;
    for (int k = 0 ; k < dim1 + dim2 ; k++) {

        if (indiceArray2 == dim2 || (indiceArray1 < dim1 && array1[indiceArray1] < array2[indiceArray2])) {
            array3[k] = array1[indiceArray1];
            indiceArray1++;
        }
        else {
            array3[k] = array2[indiceArray2];
            indiceArray2++;
        }
    }
}