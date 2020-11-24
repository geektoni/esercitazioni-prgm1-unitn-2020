#include <iostream>
#include <cstdlib>

using namespace std;

const int DIM = 10;

void inizializza(int * array);
void stampa(int * array);

int main() {

    int array[DIM];

    srand(time(NULL));

    inizializza(array);
    stampa(array);

    return 0;
}

void inizializza(int * array) {
    for (int i = 0 ; i < DIM ; i++) {
        *(array+1) = rand() % 10;
        
        //*array = rand() % 10; soluzione alternativa
        //*array++;
    }
}

void stampa(int * array) {
    for (int i = 0 ; i < DIM ; i++) {
        cout << *(array+i) << " ";
    }
    cout << endl;
}




