#ifndef PILA_H
#define PILA_H

#include <iostream>
using namespace std;

struct pila_nodo {
	int value;
	pila_nodo* next;
};
typedef pila_nodo* pila_lista;

void pila_init();
bool pila_push(int);
bool pila_top(int &);
bool pila_pop();
void pila_print();

#endif