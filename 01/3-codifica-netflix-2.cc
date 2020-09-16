// Scrivete un programma che, dato in input un carattere,
// ritorni una sua versione codificata ()

#include <iostream>

using namespace std;

int main() {
  char c, q;
  cout << "Dammi un carattere: ";
  cin >> c;
  q = (char)((int)c + 13);
  cout << "Codifica: " << q << endl;
  q = (char)((int)q - 13);
  cout << "Originale: " << q << endl;
  return 0;
}
