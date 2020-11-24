#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

void confronta(int dadoAttaccante, int dadoDifensore);

int main() {

    srand(time(NULL));

    int dadoAttaccante1 = rand() % 6 + 1;
    int dadoAttaccante2 = rand() % 6 + 1;

    int dadoDifensore1 = rand() % 6 + 1;
    int dadoDifensore2 = rand() % 6 + 1;

    int dadoMaxAttaccante = max(dadoAttaccante1, dadoAttaccante2);
    int dadoMinAttaccante = min(dadoAttaccante1, dadoAttaccante2);

    int dadoMaxDifensore = max(dadoDifensore1, dadoDifensore2);
    int dadoMinDifensore = min(dadoDifensore1, dadoDifensore2);

    confronta(dadoMaxAttaccante, dadoMaxDifensore);
    confronta(dadoMinAttaccante, dadoMinDifensore);

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