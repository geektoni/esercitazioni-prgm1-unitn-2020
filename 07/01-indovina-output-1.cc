#include <iostream>
using namespace std;

int main()
{
  int a = 32;
  int * ptr = &a;

  int b = 14;
  int & ref = b;

  a += b;
  *ptr += b;

  cout << a << ", " << b << endl;

  return 0;
}
