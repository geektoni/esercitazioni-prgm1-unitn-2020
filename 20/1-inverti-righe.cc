#include <iostream>
#include <fstream>
#include "pila.h"

using namespace std;

int main(int argc, char* argv[]) {

    int returnValue = 0;

    if (argc != 3) {
        cout << "Usage: ./a.out <input> <output>" << endl;
        returnValue = 1;
    }
    else {
        fstream input, output;
        input.open(argv[1], ios::in);
        output.open(argv[2], ios::out);

        if (input.fail() || output.fail()) {
            cout << "Errore file" << endl;
            returnValue = 2;
        }
        else {

            init();
            int numero;

            while(input >> numero) {
                push(numero);
            }

            while(top(numero)) {
                output << numero << endl;
                pop();
            }
        }

        input.close();
        output.close();
    }

    return returnValue;
}