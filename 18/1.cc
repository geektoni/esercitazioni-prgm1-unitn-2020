#include <iostream>
#include <fstream>
#include "1-caesar.h"

using namespace std;

int main (int argc, char * argv[]) {

    if (argc != 4) {
        cout << "Usage: ./a.out <input_file> <output_file> <chiave>" << endl;
        exit(0);
    }
    
    fstream input, output;
    char parola[256];
    bool cifrare;
    
    char opzione;
    cout << "Quale operazione vuoi eseguire (c/d)? ";
    cin >> opzione;
    if (opzione == 'c') {
        cifrare = true;
    } else {
        cifrare = false;
    }
  
    
    input.open(argv[1], ios::in);
    output.open(argv[2], ios::out);
    
    if (input.fail()) {
        cout << "Errore nell'apertura dell'input" << endl;
        exit(1);
    }
    
    
    int chiave = atoi(argv[3]) % 26;
    input >> parola;
    while (!input.eof()) {
        if (cifrare) {
            crypt(parola, chiave);
        } else {
            decrypt(parola, chiave);
        }
        output << parola << " ";
        input >> parola;
    }
    cout << endl;
    
    
    input.close();
    output.close();
    
    return 0;
}
