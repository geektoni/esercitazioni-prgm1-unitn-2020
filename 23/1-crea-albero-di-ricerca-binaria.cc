#include <iostream>
#include <fstream>

using namespace std;

struct nodo {
    int value;
    nodo* left;
    nodo* right;
};
typedef nodo* albero;


albero creaAlberoDiRicercaBinaria(char* inputFile);
void inserisciNodoInAlberoDiRicercaBinaria(albero radice, nodo* nuovoNodo);


int main(int argc, char* argv[]) {

    int returnValue = 0;

    if (argc != 2) {
        cout << "Usage: ./a.out <nome_file>" << endl;
        returnValue = 1;
    }
    else {
         albero alberoBinario = creaAlberoDiRicercaBinaria(argv[1]);

        if (alberoBinario == NULL) {
            cout << "Il file e' vuoto oppure non esiste" << endl;
            returnValue = 2;
        }
    }

    return returnValue;
}


albero creaAlberoDiRicercaBinaria(char* inputFile) {

    fstream input;
    albero radice = NULL;
    input.open(inputFile, ios::in);

    if (input.fail()) {
        cout << "Errore in lettura" << endl;
    }
    else {
        int numero;
        input >> numero;
        radice = new nodo{numero, NULL, NULL};

        while(input >> numero) {
            nodo* nuovoNodo = new nodo{numero, NULL, NULL};
            inserisciNodoInAlberoDiRicercaBinaria(radice, nuovoNodo);
        }
    }

    input.close();

    return radice;
}

void inserisciNodoInAlberoDiRicercaBinaria(albero radice, nodo* nuovoNodo) {
    if (nuovoNodo->value > radice->value) {
        if (radice->right == NULL) {
            radice->right = nuovoNodo;
        }
        else {
            inserisciNodoInAlberoDiRicercaBinaria(radice->right, nuovoNodo);
        }
    }
    else {
        if (radice->left == NULL) {
            radice->left = nuovoNodo;
        }
        else {
            inserisciNodoInAlberoDiRicercaBinaria(radice->left, nuovoNodo);
        }
    }
}