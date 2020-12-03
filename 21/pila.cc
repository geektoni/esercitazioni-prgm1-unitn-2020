#include "pila.h"

static pila_lista pila;

static bool vuota () {
	return (pila == NULL);    
}



void pila_init() {
	pila = NULL;
}


bool pila_top (int &n) {
	
	bool risultatoOperazione;
	if (vuota()) {
		risultatoOperazione = false;
	}
	else {
		n=pila->value;
		risultatoOperazione = true;
	}
	return risultatoOperazione;
}


bool pila_push (int n) {

	bool risultatoOperazione;
	pila_lista nuovoNodo = new pila_nodo;
	if (nuovoNodo==NULL) {
		risultatoOperazione = false;
	}
	else {
		nuovoNodo->value = n;
		nuovoNodo->next = pila;
		pila = nuovoNodo;
		risultatoOperazione = true;
	}
	return risultatoOperazione;
}


bool pila_pop () {
	
	bool risultatoOperazione;
	if (vuota()) {
		risultatoOperazione = false;
	}
	else {
		pila_lista primoNodo = pila;
		pila = pila->next;
		delete primoNodo;
		risultatoOperazione = true;
	}
	return risultatoOperazione;
}

    
void pila_print() {

  if (!vuota()) {
    pila_lista nodoCorrente = pila;
    do {
      cout << nodoCorrente->value << endl;
      nodoCorrente = nodoCorrente->next;
    } while (nodoCorrente != NULL);
  }
}




