#include <iostream>
using namespace std;

int main()
{
  int numero;
  bool numero_primo = true;

  cout << "Inserire il numero di cui si vuole controllare la primalità: ";
  cin >> numero;

  // Il contatore i inizia da 2, visto che tutti i numeri sono
  // divisibili per 1
  for (int i=2; i<numero && numero_primo; i++)
  {
    if (numero%i == 0)
      numero_primo = false;
  }

  if (numero_primo)
    cout << "Il numero " << numero << " è primo!" << endl;
  else
    cout << "Il numero " << numero << " non è primo!" << endl;

  return 0;
}
