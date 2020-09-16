// Scrivete un programma che, dato in input il raggio,
// calcoli l’area e la circonferenza di un cerchio.
#include <iostream>

using namespace std;

int main() {
  float raggio;
  const float pi = 3.14;

  cout << "Dammi il raggio: ";
  cin >> raggio;

  // Volendo queste operazioni possono essere memorizzate in
  // una variabile prima di essere stampate a video.
  // float circ = 2 * pi * raggio;
  // float area = raggio * raggio * pi;

  cout << "Circonferenza: " << 2 * pi * raggio << endl;
  cout <<"Area: " << raggio * raggio * pi << endl;

  return 0;
}
