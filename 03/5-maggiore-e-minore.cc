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
  minore = ((a+b) - abs(a-b))/2;

  cout << "Maggiore: " << maggiore << endl;
  cout << "Minore: " << minore << endl;

  return 0;
}
