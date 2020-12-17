#include <iostream>
#include <cstdlib>

using namespace std;

void stampaArray(char v [], int dim);
void inizializzaArray(char v [], int dim);
void ruotaArray(char v [], int dim, int rotazione, int rotazioneCorrente = 0);
void rotazioneSingola(char v [], int dim, int contatore = 0);


int main() {

    int j, dim;
    char * v;

    cout << "Inserisci la dimensione dell'array: ";
    cin >> dim;
    cout << "Inserisci j: ";
    cin >> j;
    
    v = new char[dim];
    
    srand(time(NULL));
    
    inizializzaArray(v, dim);
    stampaArray(v, dim);
    ruotaArray(v, dim, j);
    stampaArray(v, dim);

    delete [] v;

    return 0;
}


void stampaArray(char v [], int dim) {
    for (int i = 0 ; i < dim ; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void inizializzaArray(char v [], int dim) {
    for (int i = 0 ; i < dim ; i++) {
        v[i] = rand() % ('Z'-'A' + 1) + 'A';
    }
}

void ruotaArray(char v [], int dim, int rotazione, int rotazioneCorrente) {
    if (rotazioneCorrente < rotazione) {
        int temp = v[0];
        rotazioneSingola(v, dim);
        v[dim-1] = temp;
        rotazioneCorrente++;
        ruotaArray(v, dim, rotazione, rotazioneCorrente);
    }
}
void rotazioneSingola(char v [], int dim, int contatore) {
    if (contatore < dim-1) {
        v[contatore] = v[contatore+1];
        contatore++;
        rotazioneSingola(v, dim, contatore);
    }
}