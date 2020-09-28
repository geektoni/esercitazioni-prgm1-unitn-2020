#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float a, b;
  float maggiore, minore;

  cout << "Inserisci due numeri: ";
  cin >> a >> b;

  maggiore = ((a+b) + abs(a-b))/2;
  // Volendo, è possibile trovare il minore dei due numeri
  // in altro modo. Una volta trovato il maggiore/minore tra i due
  // potete sottrarlo alla somma di entrambi. Così facendo, rimarrà
  // soltato l'altro
  // 
  // minore = (a+b)-maggiore
  //
  minore = ((a+b) - abs(a-b))/2;

  cout << "Maggiore: " << maggiore << endl;
  cout << "Minore: " << minore << endl;

  return 0;
}
