#include <iostream>

using namespace std;

int divisione(int dividendo, int divisore);

int main() {

    int dividendo, divisore;
    cout << "Inserisci il dividendo: ";
    cin >> dividendo;
    cout << "Inserisci il divisore: ";
    cin >> divisore;

    int quoziente = divisione(dividendo, divisore);

    cout << "Il quoziente è " << quoziente << endl;

    return 0;
}

int divisione(int dividendo, int divisore) {
    
    int returnValue;

    if (dividendo < divisore) {
        cout << "Il resto è " << dividendo << endl;
        returnValue = 0;
    }
    else {
        dividendo -= divisore;
        returnValue = 1 + divisione(dividendo, divisore);
    }

    return returnValue;
}