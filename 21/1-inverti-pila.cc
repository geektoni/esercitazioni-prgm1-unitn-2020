#include <iostream>
#include "pila.h"
#include "coda.h"

using namespace std;


void invertiPila();

int main () {

    pila_init();
    coda_init();
    
    pila_push(1);
    pila_push(2);
    pila_push(3);
    
    pila_print();
    cout << endl;
    
    invertiPila();
    
    pila_print();
    
    pila_deinit();
    coda_deinit();

    return 0;
}

void invertiPila() {

    int numero;
    
    while(pila_top(numero)) {
        coda_enqueue(numero);
        pila_pop();
    }
    
    while(coda_first(numero)) {
        pila_push(numero);
        coda_dequeue();
    }
}














