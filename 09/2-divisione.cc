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

    // Per fare la divisione, sottraggo al dividendo il divisore fino a che
    // il dividendo non è minore del divisore (in quel caso, quello è il resto
    // della mia divisione).

    int quoziente = 0;
    while (dividendo > divisore) {
        quoziente++;
        dividendo -= divisore;
    }

    resto = dividendo;
    return quoziente;
}
