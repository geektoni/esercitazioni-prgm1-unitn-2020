#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cout << "Inserisci un intervallo: " << endl;
  cin >> b >> c;

  // Volendo, possiamo creare un ciclo in cui controlliamo
  // se l'utente ha inserito un intervallo corretto
  while(b >= c)
  {
    cout << "Hai inserito un intervallo non corretto (" << b << ">" << c << ")" << endl;
    cout << "Inserire un intervallo: " << endl;
    cin >> b >> c;
  }

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
