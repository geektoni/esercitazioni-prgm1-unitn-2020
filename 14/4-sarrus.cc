#include <iostream>
#include <cstdlib>

using namespace std;

const int RIGHE = 3;
const int COLONNE = 3;

void inizializza(int matrice[][COLONNE]);
void stampa(const int matrice[][COLONNE]);
int sarrus(const int matrice[][COLONNE]);
int moltiplicaDiagonale(const int matrice[][COLONNE], int colonnaDiPartenza, bool inversa);

int main() {

    srand(time(NULL));

    int matrice[RIGHE][COLONNE];

    inizializza(matrice);
    stampa(matrice);

    int determinante = sarrus(matrice);
    cout << "Il determinante è " << determinante << endl;

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

int sarrus(const int matrice[][COLONNE]) {
    return moltiplicaDiagonale(matrice, 0, false)
        + moltiplicaDiagonale(matrice, 1, false)
        + moltiplicaDiagonale(matrice, 2, false)
        - moltiplicaDiagonale(matrice, 0, true)
        - moltiplicaDiagonale(matrice, 1, true)
        - moltiplicaDiagonale(matrice, 2, true);

}

int moltiplicaDiagonale(const int matrice[][COLONNE], int colonnaDiPartenza, bool inversa) {

    int valoreDiRitorno = 1;
    int segno = inversa ? -1 : 1;

    for (int riga = 0 ; riga < RIGHE ; riga++) {
        int colonna = (colonnaDiPartenza+riga*segno) % COLONNE;
        colonna = (colonna < 0) ? colonna+COLONNE : colonna;
        valoreDiRitorno *= matrice[riga][colonna];
    }

    return valoreDiRitorno;
}