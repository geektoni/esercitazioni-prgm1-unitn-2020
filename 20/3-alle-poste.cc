#include <iostream>
#include <cstring>
#include "coda.h"

using namespace std;


int main() {

    init();

    cout << "inserisci: " << endl;
    cout << "- un nome per aggiungere una persona " << endl;
    cout << "- 'smaltisci' per smaltire una persona" << endl;
    cout << "- 'stampa' per vedere la coda" << endl;

    while (true) {
        char * input = new char[25];
        cin >> input;

        if (strcmp(input, "smaltisci") == 0) {
            first(input);
            dequeue();
            cout << "abbiamo smaltito " << input << endl;
            delete input;
        }
        else if (strcmp(input, "stampa") == 0) {
            cout << "la coda contiene queste persone: " << endl;
            print();
        }
        else {
            cout << "abbiamo inserito " << input << " nella coda" << endl;
            enqueue(input);
        }
    }

    return 0;
}
