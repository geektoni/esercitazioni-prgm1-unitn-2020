#include <iostream>
using namespace std;

int main()
{
  int chiave;
  char carattere, conversione;

  cout << "Inserisci la chiave di conversione: ";
  cin >> chiave;

  cout << "Inserisci una lettera in minuscolo: ";
  cin >> carattere;

  conversione = carattere + chiave;

  cout << "La lettera convertita è: " << conversione << endl;
  cout << "Il carattere originale era: " << (char) (conversione - chiave) << endl;

  return 0;
}
