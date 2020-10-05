#include <iostream>
using namespace std;

int main()
{
  int numero;
  bool numero_primo;

  cout << "Inserire il massimo numero di cui si vuole controllare la primalità (0-100): ";
  cin >> numero;

  // Controllo tutti i numeri da 2 a N (dove N è uguale alla variabile numero)
  for (int i = 2; i<=numero; i++) {

    numero_primo = true;

    // Il contatore i inizia da 2, visto che tutti i numeri sono
    // divisibili per 1
    for (int j=2; j<i && numero_primo; j++)
    {
      if (i%j == 0)
        numero_primo = false;
    }

    if (numero_primo)
      cout << "Il numero " << i << " è primo!" << endl;
    else
      cout << "Il numero " << i << " non è primo!" << endl;

  }

  return 0;
}
