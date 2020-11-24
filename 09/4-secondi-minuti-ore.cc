#include <iostream>

using namespace std;

int divisione(int dividendo, int divisore, int & resto);
void converti(int & secondi, int & minuti, int & ore);

int main() {

    int secondi = 121, minuti = 59, ore = 2;

    converti(secondi, minuti, ore);

    cout << "Secondi " << secondi << ", minuti " << minuti << ", ore " << ore << endl;
   
    return 0;
}

int divisione(int dividendo, int divisore, int & resto) {
    int quoziente = 0;
    while (dividendo >= divisore) {
        quoziente++;
        dividendo -= divisore;
    }
    resto = dividendo;
    return quoziente;
}

void converti(int & secondi, int & minuti, int & ore) {

    int minutiDaAggiungere = divisione(secondi, 60, secondi);
    minuti += minutiDaAggiungere;

    int oreDaAggiungere = divisione(minuti, 60, minuti);
    ore += oreDaAggiungere;
}