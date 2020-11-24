#include <iostream>
#include <cstdlib>

using namespace std;

void confronta(int dadoAttaccante, int dadoDifensore);

int main() {

    srand(time(NULL));

    int dadoAttaccante = rand() % 6 + 1;
    int dadoDifensore = rand() % 6 + 1;

    confronta(dadoAttaccante, dadoDifensore);

    return 0;
}

void confronta(int dadoAttaccante, int dadoDifensore) {

    cout << "Dado attaccante: " << dadoAttaccante << endl;
    cout << "Dado difensore: " << dadoDifensore << endl;

    if (dadoAttaccante > dadoDifensore) {
        cout << "Ha vinto l'attaccante" << endl;
    }
    else {
        cout << "Ha vinto il difensore" << endl;
    }
}