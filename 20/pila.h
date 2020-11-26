#ifndef PILA_H
#define PILA_H

#include <iostream>
using namespace std;

struct nodo {
	int value;
	nodo* next;
};
typedef nodo* lista;

void init();
bool push(int);
bool top(int &);
bool pop();

#endif