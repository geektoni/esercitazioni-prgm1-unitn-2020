#include <iostream>
using namespace std;

int main()
{

  int binario;
  int decimale=0;

  cout << "Inserisci il numero binario da convertire: ";
  cin >> binario;

  int potenze_due = 1;
  int cifra;

  while(binario != 0)
  {
    // Estraggo una cifra del numero binario. Si parte da destra.
    cifra = binario%10;

    // Sommo al numero decimale la cifra binaria moltiplicata per la
    // potenza di due.
    decimale += cifra*potenze_due;

    // Incremento la potenza
    potenze_due *= 2;

    // Riduco il numero binario per passare alla cifra successiva
    binario /= 10;
  }

  cout << "Il numero decimale corrispondente è: " << decimale << endl;

  return 0;
}
