#include <iostream>
using namespace std;

int main()
{
  char minuscolo, maiuscolo;

  cout << "Inserisci una lettera in minuscolo: ";
  cin >> minuscolo;

  maiuscolo = (minuscolo - 'a')+'A';

  cout << "La lettera convertita è: " << maiuscolo << endl;

  return 0;
}
