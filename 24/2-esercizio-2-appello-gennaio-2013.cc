#include <iostream>
#include <cstdlib>

using namespace std;

int ** inizializzaMatrice(int righe, int colonne);
void stampaMatrice(int ** matrice, int righe, int colonne, 
    int coordinataRiga, int coordinataColonna, 
    int righeSottomatrice, int colonneSottomatrice);
void deallocaMatrice(int ** matrice, int righe);

int main() {

    int righe, colonne;
    cout << "Inserisci il numero di righe: ";
    cin >> righe;
    cout << "Inserisci il numero di colonne: ";
    cin >> colonne;

    srand(time(NULL));
    int ** matrice = inizializzaMatrice(righe, colonne);
    stampaMatrice(matrice, righe, colonne, 0, 0, righe, colonne);

    int coordinataRiga, coordinataColonna;
    int righeSottomatrice, colonneSottomatrice;
    cout << "Inserisci le coordinate della cella di partenza" << endl;
    cout << "Riga: ";
    cin >> coordinataRiga;
    cout << "Colonna: ";
    cin >> coordinataColonna;

    cout << "Inserisci il numero di righe della sottomatrice: ";
    cin >> righeSottomatrice;
    cout << "Inserisci il numero delle colonne della sottomatrice: ";
    cin >> colonneSottomatrice;

    stampaMatrice(matrice, righe, colonne, 
        coordinataRiga, coordinataColonna, 
        righeSottomatrice, colonneSottomatrice);

    deallocaMatrice(matrice, righe);

    return 0;
}


int ** inizializzaMatrice(int righe, int colonne) {

    int ** matrice = new int*[righe];

    for (int riga = 0; riga < righe; riga++) {
        matrice[riga] = new int[colonne];
        for (int colonna = 0; colonna < colonne; colonna++) {
            matrice[riga][colonna] = rand() % 10;
        }
    }

    return matrice;
}


void stampaMatrice(int ** matrice, int righe, int colonne, 
    int coordinataRiga, int coordinataColonna, 
    int righeSottomatrice, int colonneSottomatrice) {

        for (int riga = coordinataRiga; 
            riga < righe && (riga-coordinataRiga) < righeSottomatrice; 
            riga++) {

            for (int colonna = coordinataColonna; 
                colonna < colonne && (colonna-coordinataColonna) < colonneSottomatrice; 
                colonna++) {

                    // STAMPA SOLO CORNICE
                    /*if (((riga == coordinataRiga) || 
                        (riga == righe-1) ||
                        ((riga-coordinataRiga) == righeSottomatrice-1)) 
                        ||
                        ((colonna == coordinataColonna) || 
                        (colonna == colonne-1) ||
                        ((colonna-coordinataColonna) == colonneSottomatrice-1))) {*/

                        cout << matrice[riga][colonna] << " ";

                    /*}
                    else {
                        cout << "  ";
                    }*/
                }

            cout << endl;
        }
    }


void deallocaMatrice(int ** matrice, int righe) {
    for (int i = 0; i < righe; i++) {
        delete[] matrice[i];
    }
    delete [] matrice;
}