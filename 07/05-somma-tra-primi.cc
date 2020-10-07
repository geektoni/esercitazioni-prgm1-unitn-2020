#include <iostream>
using namespace std;

int main()
{
  int N;
  cout << "Inserire il numero che si vuole controllare" << endl;
  cin >> N;

  bool primo_addendo, secondo_addendo, somma;

  int a,b;

  somma = false;

  for (int i=2; i<N && !somma; i++)
  {
    primo_addendo = true;
    secondo_addendo = true;

    // Controllo se il primo addendo è un numero primo
    a = i;
    for (int divisore=2; divisore<i; divisore++)
    {
      if (i%divisore == 0)
        primo_addendo = false;
    }

    // Controllo se il secondo addendo è un numero primo
    b = N-i;
    for (int divisore=2; divisore < (N-i); divisore++)
    {
      if ((N-i)%divisore == 0)
        secondo_addendo = false;
        b = (N-i);
    }

    // In caso siano entrambi numeri positivi, allora posso ritornare
    if (primo_addendo && secondo_addendo)
      somma = true;

  }

  if (somma)
    cout << "Il numero " << N << " può essere espresso come la somma dei seguenti" << " numeri primi " << a << " + " << b << endl;
  else
    cout << "Il numero " << N << " non può essere espresso come somma di primi." << endl;

  return 0;
}
