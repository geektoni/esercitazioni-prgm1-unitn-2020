#include <iostream>
#include <cmath>
using namespace std;

int main() {

  double approssimazione_pi = 0;
  float contatore = 1;
  int N = 0;

  cout << "Inserire il limite superiore di approssimazione del pi greco: ";
  cin >> N;

  // Si può esprimere sia con un ciclo while che con un ciclo for.
  while(contatore <= N)
  {
    approssimazione_pi += 1/(contatore*contatore);
    contatore++;
  }

  // Calcolo il pi greco
  approssimazione_pi = sqrt(approssimazione_pi*6);

  // Definisco la precisione di cout come 10 cifre decimali, poi stampo il valore
  cout.precision(10);
  cout << "L'approssimazione computata ha un valore di " << fixed << approssimazione_pi << endl;

  return 0;
}
