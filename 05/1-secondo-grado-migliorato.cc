#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float a, b, c;
  float delta;
  float soluzione_1, soluzione_2;

  cout << "Inserire i coefficienti a, b e c (ax^2 + bx + c = 0): ";
  cin >> a >> b >> c;

  delta = b*b - 4 * a * c;

  // Se il delta è maggiore di zero, allora possiamo proseguire
  // altrimenti ritorna un errore.
  if (delta > 0) {

    soluzione_1 = (-b + sqrt(delta))/(2*a);
    soluzione_2 = (-b - sqrt(delta))/(2*a);
    cout << "Le soluzioni sono: " << soluzione_1 << " " << soluzione_2 << endl;

  } else {
    cout << "Il delta è negativo! Non posso proseguire!" << endl;
  }

  return 0;
}
