#include <iostream>
#include <cstdlib>

using namespace std;

const int RIGHE = 10;
const int COLONNE = 10;

void inizializza(int matrice[][COLONNE]);
void stampa(const int matrice[][COLONNE]);
int trovaIsole(const int matrice[][COLONNE]);
int controllaSeIsola(const int matrice[][COLONNE], int riga, int colonna);

int main() {

    int matrice[RIGHE][COLONNE];

    srand(time(NULL));

    inizializza(matrice);
    stampa(matrice);

    int isole = trovaIsole(matrice);
    cout << "La matrice ha " << isole << " isole" << endl;

    return 0;
}

void inizializza(int matrice[][COLONNE]) {
    for (int riga = 0; riga < RIGHE ; riga++) {
        for (int colonna = 0 ; colonna < COLONNE ; colonna++) {
            matrice[riga][colonna] = rand() % 2;
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

int trovaIsole(const int matrice[][COLONNE]) {
    int isole = 0;
    for (int riga = 0 ; riga < RIGHE ; riga++) {
        for (int colonna = 0 ; colonna < COLONNE ; colonna++) {
            if (matrice[riga][colonna] == 1) {
                isole+= controllaSeIsola(matrice, riga, colonna);
            }
        }
    }
    return isole;
}

int controllaSeIsola(const int matrice[][COLONNE], int rigaDiPartenza, int colonnaDiPartenza) {
    int somma = 0;
    for (int riga = rigaDiPartenza-1 ; riga <= rigaDiPartenza+1 ; riga++) {
        for (int colonna = colonnaDiPartenza-1 ; colonna <= colonnaDiPartenza+1 ; colonna++) {
            if (riga >= 0 && riga < RIGHE && colonna >= 0 && colonna < COLONNE) {
                somma += matrice[riga][colonna];
            }
        }
    }
    return somma == 1 ? 1 : 0;
}


