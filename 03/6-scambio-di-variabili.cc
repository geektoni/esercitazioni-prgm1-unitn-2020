#include <iostream>
using namespace std;

int main()
{
  int a=6;
  int b=10;

  cout << "Originale: " << a << " " << b << endl;

  a += b;
  b = a - b;
  a = a - b;

  cout << "Scambio: " << a << " " << b << endl;

  return 0;
}
