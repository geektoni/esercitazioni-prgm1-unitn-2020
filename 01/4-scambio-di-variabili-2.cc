#include <iostream>

using namespace std;

int main() {

  int a, b;

  cout << "Dammi due numeri: ";
  cin >> a >> b;

  cout << "a: " << a << " b: " << b << endl;

  // Potete visualizzare il perchè queste operazioni
  // sono corrette se visualizzate le operazioni come
  // equazioni.
  //
  // a = 1
  // b = 2
  //
  // a = 1+b
  // b = a-b = (1+b)-b = 1
  // a = a-b = (1+b)-1 = b
  // a = 2
  // b = 1
  a += b;
  b = a-b;
  a -= b;

  cout << "a: " << a << " b: " << b << endl;

  return 0;
}
