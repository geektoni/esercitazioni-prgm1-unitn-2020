#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    srand(time(NULL));

    int tentativo, numeroDi1 = 0;

    cout << "Inserisci il numero di 1: ";
    cin >> tentativo;

    for (int i = 0 ; i < 10 ; i++) {
        int lancio = rand() % 6 + 1;
        cout << lancio << endl;
        if (lancio == 1) {
            numeroDi1++;
        }
    }

    if (tentativo == numeroDi1) {
        cout << "Indovinato" << endl;
    }
    else {
        cout << "Sbagliato, il numero era: " << numeroDi1 << endl;
    }

    return 0;
}