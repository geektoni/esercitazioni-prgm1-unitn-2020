#include <iostream>
using namespace std;

// Accesso ad area di memoria esterna al processo
int main()
{
  int array[10];
  cout << array[1000000] << endl;

  return 0;
}
