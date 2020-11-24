#include <iostream>
#include <cstdlib>

using namespace std;

const int RIGHE = 3;
const int COLONNE = 3;

void inizializza(int matrice[][COLONNE]);
void stampa(const int matrice[][COLONNE]);
void stampaTrasposta(const int matrice[][COLONNE]);
void trasponi(const int matrice[][COLONNE], int trasposta[][RIGHE]);

int main() {

    int matrice[RIGHE][COLONNE];
    int trasposta[COLONNE][RIGHE];

    srand(time(NULL));

    inizializza(matrice);
    stampa(matrice);
    
    trasponi(matrice, trasposta);
    // oppure
    stampaTrasposta(matrice);

    return 0;
}

void inizializza(int matrice[][COLONNE]) {
    for (int i = 0 ; i < RIGHE ; i++) {
        for (int j = 0 ; j < COLONNE ; j++) {
            matrice[i][j] = rand() % 10;
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

void trasponi(const int matrice[][COLONNE], int trasposta[][RIGHE]) {
    for (int riga = 0 ; riga < RIGHE ; riga++) {
        for (int colonna = 0 ; colonna < COLONNE ; colonna++) {
            trasposta[colonna][riga] = matrice[riga][colonna];
        }
    }
}

void stampaTrasposta(const int matrice[][COLONNE]) {
    for (int colonna = 0 ; colonna < COLONNE ; colonna++) {
        for (int riga = 0 ; riga < RIGHE ; riga++) {
            cout << matrice[riga][colonna] << " ";
        }
        cout << endl;
    }
    cout << endl;
}