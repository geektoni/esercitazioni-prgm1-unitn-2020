#include <iostream>
using namespace std;

int main()
{
  int inizio_sequenza, fine_sequenza;
  cout << "Inserire inizio e fine sequenza dei caratteri: ";
  cin >> inizio_sequenza >> fine_sequenza;

  if (inizio_sequenza > 127 || fine_sequenza > 127)
  {
    cout << "I valori ammessi non devono superare il 127" << endl;
    return 0;
  }

  if (inizio_sequenza < 0 || fine_sequenza < 0)
  {
    cout << "I valori ammessi non devono essere minori di 0" << endl;
    return 0;
  }

  if (inizio_sequenza > fine_sequenza)
  {
    cout << "Il primo valore inserito deve essere maggiore del secondo!" << endl;
    return 0;
  }

  for(int i=inizio_sequenza; i<=fine_sequenza; i++)
  {
    cout << (char) i <<endl;
  }

  return 0;
}
