#include <iostream>
using namespace std;

int potenza(int base, int esponente);

int main() {

  int base, esponente;
  cout << "Inserisci la base e l'esponente: " << endl;
  cin >> base >> esponente;

  cout << "Il risultato è " << potenza(base, esponente) << endl;

  return 0;
}

int potenza(int base, int esponente) {

    if (esponente == 0) {
      return 1;
    } else {
      return base * potenza(base, esponente-1);
    }
}
