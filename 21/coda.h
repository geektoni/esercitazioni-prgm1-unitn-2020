#ifndef CODA_H
#define CODA_H

#include <iostream>
using namespace std;

struct coda_nodo {
	int value;
	coda_nodo* next;
};
typedef coda_nodo* coda_lista;

struct coda {
    coda_lista tail;
    coda_lista head;
};

void coda_init();
bool coda_enqueue(int);
bool coda_first(int &);
bool coda_dequeue();
void coda_print();

#endif