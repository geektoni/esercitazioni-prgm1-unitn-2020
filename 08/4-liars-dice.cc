#include <iostream>
#include <cstdlib>

using namespace std;

void generare_lanci(int & totale);

int main() {

    srand(time(NULL));

    int tentativo, numeroDi1 = 0;

    generare_lanci(numeroDi1);

    cout << "Inserisci il numero di 1: ";
    cin >> tentativo;

    if (tentativo == numeroDi1) {
        cout << "Indovinato" << endl;
    } else {
        cout << "Sbagliato, il numero era: " << numeroDi1 << endl;
    }

    return 0;
}

void generare_lanci(int & totale) {

  // Resetto il valore totale
  totale = 0;

  for (int i = 0 ; i < 10 ; i++) {
      int lancio = rand() % 6 + 1;
      cout << lancio << endl;
      if (lancio == 1) {
          totale++;
      }
  }

}
