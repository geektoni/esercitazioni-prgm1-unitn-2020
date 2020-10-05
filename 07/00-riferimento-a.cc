#include <iostream>
using namespace std;

int main()
{
  int x = 5;
  int & y = x;

  cout << &x << " " << &y << endl;

  x++;    // 6
  cout << y << endl;   // 6
  y++;    // 7
  cout << x << endl;   // 7

  int k = 20;
  y = k;
  cout << x << endl;   // 20

  return 0;
}
