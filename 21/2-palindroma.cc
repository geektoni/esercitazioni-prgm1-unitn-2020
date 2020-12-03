#include <iostream>
#include "pila.h"
#include "coda.h"

using namespace std;


bool palindroma(char * parola) {

    bool palindroma = true;

    pila_init();
    coda_init();

    int indice = 0;
    char carattereCorrente = parola[indice];

    while (carattereCorrente != '\0') {

        carattereCorrente = parola[indice];

        if (carattereCorrente != '\0') {
            pila_push( (int) carattereCorrente);
            coda_enqueue( (int) carattereCorrente);
        }
        indice++;
    }

    int caratterePila;
    int carattereCoda;

    while (pila_top(caratterePila) && coda_first(carattereCoda)) {
        
        if (caratterePila != carattereCoda) {
            palindroma = false;
        }
        pila_pop();
        coda_dequeue();
    }

    return palindroma;
}

int main() {

    char parola[101];

    cout << "Inserisci una parola: " << endl;
    cin >> parola;

    cout << "La parola" << (palindroma(parola) ? " " : " non ") << "è palindroma" << endl;

    return 0;
}