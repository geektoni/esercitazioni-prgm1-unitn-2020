#include <iostream>
#include <cmath>

using namespace std;

int main () {

  int a, b;

  cout << "Inserisci il valore di 'a': ";
  cin >> a;
  cout << "Inserisci il valore di 'b': ";
  cin >> b;

  int valore_assoluto = (a-b)*((a>b)-(b>a));
  cout << "Valore assoluto abs(" << a << "-" << b << ") = " << valore_assoluto << endl;

  // Soluzione con IF-ELSE
  valore_assoluto = (a-b);
  if (valore_assoluto < 0) {
    valore_assoluto = - valore_assoluto;
  }
  cout << "Valore assoluto abs(" << a << "-" << b << ") = " << valore_assoluto << endl;

  // Soluzione con libreria
  cout << "Valore assoluto abs(" << a << "-" << b << ") = " << abs(a-b) << endl;

  return 0;
}
