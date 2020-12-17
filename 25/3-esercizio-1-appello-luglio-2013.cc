#include <iostream>
#include <fstream>

using namespace std;

int calcolaLunghezza(char * stringa);

int main(int argc, char * argv[]) {

    int returnValue = 0;

    if (argc != 3) {
        cout << "Usage: ./a.out <stringa> <file>" << endl;
        returnValue = 1;
    }
    else {

        fstream input;
        input.open(argv[2], ios::in);

        if (input.fail()) {
            cout << "Errore lettura del file" << endl;
            returnValue = 2;
        }
        else {
            char * stringa = argv[1];
            int lunghezzaStringa = calcolaLunghezza(stringa);
            char parolaCorrente [31];
            bool trovato = false;

            while (input >> parolaCorrente && !trovato) {

                int indiceDiPartenza = 0;
                int indiceStringa = 0;
                int indiceParolaCorrente = 0;
                char carattereCorrente = parolaCorrente[indiceParolaCorrente];

                while (carattereCorrente != '\0' && !trovato) {
                    carattereCorrente = parolaCorrente[indiceParolaCorrente];

                    if (indiceStringa == lunghezzaStringa) {
                        trovato = true;
                    }
                    else if (stringa[indiceStringa] == carattereCorrente) {
                        indiceStringa++;
                        indiceParolaCorrente++;
                    }
                    else {
                        indiceStringa = 0;
                        indiceDiPartenza++;
                        indiceParolaCorrente = indiceDiPartenza;
                    }
                }
            }

            if (trovato) {
                cout << "L'occorrenza è stata trovata!" << endl;
            }
            else {
                cout << "L'occorrenza NON è stata trovata" << endl;
            }

            input.close();
        }
    }

    return returnValue;
}


int calcolaLunghezza(char * stringa) {
    int lunghezza = 0;
    while (stringa[lunghezza] != '\0') {
        lunghezza++;
    }
    return lunghezza;
}
