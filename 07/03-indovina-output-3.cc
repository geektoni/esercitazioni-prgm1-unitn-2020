#include <iostream>
using namespace std;

int main()
{
  int x = 5;
  int * y = &x;
  int ** k = &y;

  cout << x << " " << &x << endl;
  cout << (*y) << " " << &y << endl;
  cout << (*k) << " " << &k << endl;
  cout << *(*k) << endl;

  return 0;
}
