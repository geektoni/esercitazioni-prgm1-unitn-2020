#include <iostream>
using namespace std;

int main()
{
  int i = 20;
  int * ptr = &i;
  (*ptr)++;

  int j = 15;
  ptr = &j;
  (*ptr)++;

  cout << i << endl;

  return 0;
}
