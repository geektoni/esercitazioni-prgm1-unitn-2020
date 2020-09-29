#include <iostream>
using namespace std;

int main()
{
  int a,b;
  cout << "Inserisci due numeri, a e b: " << endl;

  if (a > b)
    cout << "Il numero " << a << " è maggiore di " << b << endl;
  else
    cout << "Il valore di a è minore del valore di b" << endl;

  // Lo stesso risultato si può ottenere utilizzando un costrutto
  // switch:
  // switch (a > b) {
  //  case 0:
  //    cout << "Il numero " << a << " è maggiore di " << b << endl;
  //    break;
  //  case 1:
  //    cout << "Il valore di a è minore del valore di b" << endl;
  //    break;
  //  }

  return 0;
}
