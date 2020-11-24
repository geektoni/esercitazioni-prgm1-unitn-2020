#include <iostream>
#include <cstdlib>

using namespace std;

const int RIGHE = 10;
const int COLONNE = 10;

void inizializza(int matrice[][COLONNE]);
void stampa(const int matrice[][COLONNE]);

int main() {

    srand(time(NULL));

    int matrice[RIGHE][COLONNE];

    inizializza(matrice);
    stampa(matrice);

    return 0;
}

void inizializza(int matrice[][COLONNE]) {
    for (int riga = 0; riga < RIGHE ; riga++) {
        for (int colonna = 0 ; colonna < COLONNE ; colonna++) {
            matrice[riga][colonna] = rand() % 10;
        }
    }
}

void stampa(const int matrice[][COLONNE]) {
    for (int riga = 0 ; riga < RIGHE ; riga++) {
        for (int colonna = 0 ; colonna < COLONNE ; colonna++) {
            cout << matrice[riga][colonna] << " ";
        }
        cout << endl;
    }
    cout << endl;
}