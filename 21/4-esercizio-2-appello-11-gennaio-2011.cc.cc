#include <iostream>

using namespace std;

bool palindromo (int *array, int primo, int ultimo);
bool array_palindromo (int *array, int dim);

int main() {

    int dim;
    int array[100];

    do {
        cout << "Inserisci il numero di elementi (massimo 100): ";
        cin >> dim;

    } while (dim <= 0);

    if (dim > 100) {
        cout << "Puoi inserire al massimo 100 elementi" << endl;
        dim = 100;
    }
    
    for (int i = 0; i < dim; i++) {
        cout << "Inserire un intero: ";
        cin >> array[i];
    }

    if ( array_palindromo(array, dim) ) {
        cout << "La sequenza inserita è palindroma" << endl;
    }
    else {
        cout << "La sequenza inserita NON è palindroma" << endl;
    }

    return 0;
}


bool palindromo (int *array, int primo, int ultimo) {

    bool returnValue;

    if (primo > ultimo) {
        returnValue = true;
    }
    else if (array[primo] != array[ultimo]) {
        returnValue = false;
    }
    else {
        returnValue = palindromo(array, primo+1, ultimo-1);
    }
    
    return returnValue;
}

bool array_palindromo (int *array, int dim) {
    return palindromo(array, 0, dim-1);
}