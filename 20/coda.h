#ifndef CODA_H
#define CODA_H

#include <iostream>
using namespace std;

struct nodo {
	char* nome;
	nodo* next;
};
typedef nodo* lista;

struct coda {
    lista tail;
    lista head;
};

void init ();
bool enqueue(char *);
bool first(char * &);
bool dequeue();
void print ();

#endif



