#include <iostream>
#include <cstring>
#include "coda.h"

using namespace std;


int main() {

    init();

    cout << "inserisci: " << endl;
    cout << "- 'rimuovi' per rimuovere una persona" << endl;
    cout << "- 'stampa' per vedere la coda" << endl;
    cout << "- 'esci' per terminare il programma" << endl;
    cout << "- un nome per aggiungere una persona " << endl;

    bool esci = false;
    char input[MAX_DIM];

    while (!esci) {
        
        cin >> input;

        if (strcmp(input, "rimuovi") == 0) {
            char * primo;
            if (first(primo)) {
                dequeue();
                cout << "abbiamo rimosso " << primo << endl;
                delete[] primo;
            } else {
                cout << "coda vuota" <<  endl;
            }
        }
        else if (strcmp(input, "stampa") == 0) {
            cout << "la coda contiene queste persone: " << endl;
            print();
        }
        else if (strcmp(input, "esci") == 0) {
            cout << "Uscita del programma" << endl;
            esci = true;
        }
        else {
            cout << "abbiamo inserito " << input << " nella coda" << endl;
            enqueue(input);
        }
    }

    deinit();

    return 0;
}
