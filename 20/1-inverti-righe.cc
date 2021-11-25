#include <iostream>
#include <fstream>
#include "pila.h"

using namespace std;

int main(int argc, char* argv[]) {

 
    if (argc != 3) {
        cout << "Usage: ./a.out <input> <output>" << endl;
        exit(0);
    }

    fstream input, output;
    input.open(argv[1], ios::in);
    output.open(argv[2], ios::out);

    if (input.fail() || output.fail()) {
        cout << "Errore file" << endl;
        exit(1);
    }
    

    init();
    int numero;

    while(input >> numero) {
        push(numero);
    }

    while(top(numero)) {
        output << numero << endl;
        pop();
    }

    deinit();
    input.close();
    output.close();


    return 0;
}