#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cout << "Inserisci un intervallo: " << endl;
  cin >> b >> c;

  cout << "Inserisci un terzo numero: " << endl;
  cin >> a;

  if (a <= c && a >= b)
    cout << -1 << endl;
  else if (a < b)
    cout << 1 << endl;
  else
    cout << 0 << endl;

  return 0;
}
