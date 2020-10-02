#include <iostream>
using namespace std;

int main()
{
  int n;
  int f=0, f_p=1;
  int tmp;

  cout << "Inserire il massimo numero di fibonacci da stampare: ";
  cin >> n;

  while(n>0)
  {
    cout << f + f_p << endl;

    tmp = f;
    f = f_p;
    f_p += tmp;

    n--;
  }

  return 0;
}
