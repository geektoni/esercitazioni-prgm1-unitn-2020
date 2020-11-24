#include <iostream>

using namespace std;

int divisione(int dividendo, int divisore, int & resto);

int main() {

    int dividendo, divisore, quoziente, resto;
    cout << "Inserisci dividendo: " << endl;
    cin >> dividendo;
    cout << "Inserisci divisore: " << endl;
    cin >> divisore;

    quoziente = divisione(dividendo, divisore, resto);

    cout << "Quoziente " << quoziente << ", resto " << resto << endl; 
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