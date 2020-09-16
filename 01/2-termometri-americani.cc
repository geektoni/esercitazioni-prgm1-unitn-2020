// Scrivete un programma che, data in input una temperatura in Fahrenheit,
// ritorni a video il corretto valore in Celsius.

#include <iostream>

using namespace std;

int main() {
  float celsius, farenheit;

  cout << "Dammi la temperatura in F: ";
  cin >> farenheit;

  celsius = (farenheit - 32) / 1.8;

  cout << "La temperatura in Celsius è: " << celsius << endl;

  return 0;
}
