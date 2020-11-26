#include <iostream>
#include "pila.h"

using namespace std;

int main() {

    init();

    char buffer[100];
    bool corretta = true;

    cout << "inserisci l'espressione: " << endl;
    cin >> buffer;

    int indice = 0;
    char carattereCorrente = buffer[indice];

    while (carattereCorrente != '\0') {

        carattereCorrente = buffer[indice];

        if (carattereCorrente == '(') {
            push( (char) carattereCorrente);
        }
        else if (carattereCorrente == ')') {

            int valoreInt;
            if (top(valoreInt)) {
                
                pop();
                char valoreChar = valoreInt;
                if (valoreChar != '(') {
                    corretta = false;
                }
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
    return 0;
}