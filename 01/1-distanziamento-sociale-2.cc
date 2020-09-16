// Scrivete un programma che, dato in input il raggio,
// calcoli l’area e la circonferenza di un cerchio.
#include <iostream>

using namespace std;

int main() {
  float raggio, distanza;
  const float pi = 3.14;

  cout << "Dammi il raggio: ";
  cin >> raggio;

  cout << "Dammi la distanza: ";
  cin >> distanza;

  // In alternativa, potete assegnare il risultato ad una variabile booleana
  // bool distanza_maggiore_del_raggio = (distanza > raggio);
  cout << (distanza > raggio) << endl;
  cout << (distanza < raggio) << endl;

  return 0;
}
