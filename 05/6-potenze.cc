#include <iostream>
using namespace std;

int main()
{
  int a, n;
  cout << "Inserisci la base e l'esponente: ";
  cin >> a >> n;

  // Volendo, invece che incrementare la variabile i
  // possiamo riscrivere il ciclo così da decrementare
  // l'esponente ogni volta
  //
  // while(n > 0)
  // {
  //    ...
  //    n--;
  // }
  int i=1;
  int result = a;
  while (i<=n)
  {
    cout << result << endl;
    result *= a;
    i++;
  }

  return 0;
}
