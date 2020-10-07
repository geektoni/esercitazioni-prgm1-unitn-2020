#include <iostream>
using namespace std;

int main()
{
  int inizio_sequenza = 'a';
  int fine_sequenza = 'z';

  for(int i=inizio_sequenza; i<=fine_sequenza; i++)
  {
    char maiuscola = (i-'a')+'A';
    cout << (char) i << "; "<< maiuscola <<endl;
  }

  return 0;
}
