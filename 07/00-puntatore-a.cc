#include <iostream>
using namespace std;

int main()
{
  int x = 5;
  int * y = &x;

  x++;    // 6
  cout << &x << " " << y << " " << *y << endl;   // 6
  (*y)++;    // 7
  cout << x << endl;   // 7

  int k = 20;
  *y = k; // x = k;
  cout << x << endl;   // 7
  cout << y << " " << *y << endl;
  
  return 0;
}
