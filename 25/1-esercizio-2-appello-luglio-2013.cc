#include <iostream>

using namespace std;

void stampaArray(char v [], int dim);
void ruotaArray(char v [], int dim, int rotazione);
void ruotaArrayEfficiente(char v [], int dim, int rotazione);


int main() {

    int j;
    char v [] = {'A','B','C','D','E','F','G','H'};
    const int dim = 8;

    cout << "Inserisci j: ";
    cin >> j;

    j = j % dim;

    stampaArray(v, dim);
    ruotaArrayEfficiente(v, dim, j);
    stampaArray(v, dim);

    return 0;
}


void stampaArray(char v [], int dim) {
    for (int i = 0 ; i < dim ; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}


void ruotaArrayEfficiente(char v [], int dim, int rotazione) {
    int rotazioniEffettuate = 0;
    for (int k = 0 ; k < rotazione && rotazioniEffettuate < dim; k++) {
        int temp = v[k];
        int indicePostoVuoto = k;
        int indiceElementoDaMuovere = rotazione + k;
        for (int i = 0 ; i < dim-1 && indiceElementoDaMuovere != k ; i++) {
            v[indicePostoVuoto] = v[indiceElementoDaMuovere];
            cout << "muovo indice " << indiceElementoDaMuovere << " in indice " << indicePostoVuoto << endl;
            rotazioniEffettuate++;
            indicePostoVuoto = indiceElementoDaMuovere;
            indiceElementoDaMuovere = (indiceElementoDaMuovere + rotazione) % dim;
        }
        v[indicePostoVuoto] = temp;
        cout << "muovo indice " << k << " in indice " << indicePostoVuoto << endl;
        rotazioniEffettuate++;
    }
}

// NOTA: SOLO CON NUMERI DISPARI
void ruotaArrayEfficienteRotta(char v [], int dim, int rotazione) {
    rotazione = rotazione % dim;
    int temp = v[0];
    int indicePostoVuoto = 0;
    int indiceElementoDaMuovere = rotazione;
    for (int i = 0 ; i < dim-1 ; i++) {
        v[indicePostoVuoto] = v[indiceElementoDaMuovere];
        indicePostoVuoto = indiceElementoDaMuovere;
        indiceElementoDaMuovere = (indiceElementoDaMuovere + rotazione) % dim;
    }
    v[indicePostoVuoto] = temp;
}

void ruotaArray(char v [], int dim, int rotazione) {
    int temp;
    for (int i = 0 ; i < rotazione ; i++) {
        temp = v[0];
        for (int k = 0 ; k < dim-1 ; k++) {
            v[k] = v[k+1];
        }
        v[dim-1] = temp;
    }
}