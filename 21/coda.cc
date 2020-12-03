#include "coda.h"

static coda Q;

static bool vuota() {
  return (Q.head == NULL);
}



void coda_init() {
  Q.head = NULL;
}



bool coda_enqueue(int n) {
  
    bool risultatoOperazione;
    coda_lista nuovoNodo = new coda_nodo;
    if (nuovoNodo==NULL) {
        risultatoOperazione = false;
    }
    else {
        nuovoNodo->value=n;
        nuovoNodo->next=NULL;
        if (vuota()) {
            Q.head=nuovoNodo;
        }
        else { 
            Q.tail->next=nuovoNodo;
        }
        Q.tail=nuovoNodo;
        risultatoOperazione = true;
    }
    return risultatoOperazione;
}


bool coda_first(int &n) { 
    bool risultatoOperazione;
    if (vuota()) {
        risultatoOperazione = false;
    }
    else {
        n = Q.head->value;
        risultatoOperazione = true;
    }
    return risultatoOperazione;
}


bool coda_dequeue() { 
    bool risultatoOperazione;
    if (vuota()) {
        risultatoOperazione = false;
    }
    else {
        coda_lista primoNodo;
        primoNodo = Q.head;
        Q.head = Q.head->next;
        delete primoNodo; 
        risultatoOperazione = true;
    }
    return risultatoOperazione;
}


void coda_print() {

  if (!vuota()) {
    coda_lista nodoCorrente=Q.head;
    do {
      cout << nodoCorrente->value << endl;
      nodoCorrente = nodoCorrente->next;
    } while (nodoCorrente != NULL);
  }
}
