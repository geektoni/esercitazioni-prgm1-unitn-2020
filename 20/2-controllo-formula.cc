#include <iostream>
#include "pila.h"

using namespace std;

int main() {

    init();

    char buffer[101];
    bool corretta = true;

    cout << "inserisci l'espressione: " << endl;
    cin >> buffer;

    int indice = 0;
    char carattereCorrente = buffer[indice];

    while (carattereCorrente != '\0') {

        carattereCorrente = buffer[indice];

        if (carattereCorrente == '(') {
            push(carattereCorrente);
        }
        else if (carattereCorrente == ')') {

            int tmp;
            if (top(tmp)) {
                pop();
            }
            else {
                corretta = false;
            }
        }
        indice++;
    }

    if (corretta && !pop()) {
        cout << "L'espressione è corretta" << endl;
    }
    else {
        cout << "L'espressione non è corretta!" << endl;
    }

    deinit();

    return 0;
}