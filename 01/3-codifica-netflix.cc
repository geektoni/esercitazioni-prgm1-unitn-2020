// Scrivete un programma che,
// dato in input un carattere minuscolo,
// ritorni un carattere codificato (maiuscolo).
#include <iostream>

using namespace std;

int main() {
  char carattere;
  cout << "Dammi un carattere minuscolo da convertire: ";
  cin >> carattere;

  char convertito = (carattere-'a')+'A';

  cout << "Il carattere maiuscolo è: " << convertito << endl;

  return 0;
}
