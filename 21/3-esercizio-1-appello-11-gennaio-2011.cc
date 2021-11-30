#include <fstream>
#include <iostream>

using namespace std;

int leggiECalcolaMedia(char nome_file[]);
int calcolaLunghezza(char parola[]);

int main (int argc, char * argv[]) {

    if (argc != 2) {
        cout << "Usage: ./a.out <input_file>" << endl;
        exit(1);
    }
    else {
        int media = leggiECalcolaMedia(argv[1]);
        if (media != -1) {
            cout << "la media è " << media << endl;
        }
    }

    return 0;
}
    

int leggiECalcolaMedia(char nome_file[]) {

    fstream input, output;
    char parola[11];
    int media = 0;
    int contatore = 0;

    input.open(nome_file, ios::in);
    if (input.fail()) {
        cout << "Errore nell’apertura del file "<< nome_file << endl;
        media = -1;
    }
    else {
        while (input >> parola) {
            media += calcolaLunghezza(parola);
            contatore++;
        }
        input.close();

        if (contatore != 0) {
            media = media / contatore;
        }

        output.open(nome_file, ios::out | ios::app);
        if (output.fail()) {
            cout << "Errore nell’apertura del file "<< nome_file << endl;
            media = -1;
        }
        else {
            output << endl;
            for (int i = 0 ; i < media ; i++) {
                output << '*';
            }
            output.close();
        }
    }
    return media;
}


int calcolaLunghezza(char parola[]) {
    int lunghezza = 0;
    char carattereCorrente = parola[lunghezza];
    while (carattereCorrente != '\0') {
        lunghezza++;
        carattereCorrente = parola[lunghezza];
    }
    return lunghezza;
}