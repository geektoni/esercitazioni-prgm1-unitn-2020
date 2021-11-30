#include <iostream>
#include "pila.h"
#include "coda.h"

using namespace std;

bool palindroma(char * parola);

int main () {

    char parola[101];
    
    cout << "Inserire la parola: ";
    cin >> parola;
    
    if (palindroma(parola)) {
        cout << "La parola è palindroma" << endl;
    } else {
        cout << "La parola non è palindroma" << endl;
    }

    return 0;
}


bool palindroma(char * parola) {

    pila_init();
    coda_init();
    
    bool ePalindroma = true;
    
    
    int indice = 0;
    char carattereCorrente = parola[indice];
    
    while (carattereCorrente != '\0') {
    
        carattereCorrente = parola[indice];
        
        if (carattereCorrente != '\0') {
           pila_push( (int) carattereCorrente );
           coda_enqueue( (int) carattereCorrente );
        }
        indice++;
    }
    
    
    int caratterePila;
    int carattereCoda;
    
    
    while(pila_top(caratterePila) && coda_first(carattereCoda)) {
    
        if (caratterePila != carattereCoda) {
            ePalindroma = false;
        }
        pila_pop();
        coda_dequeue();
    }
    
    pila_deinit();
    coda_deinit();
    
    return ePalindroma;
}











