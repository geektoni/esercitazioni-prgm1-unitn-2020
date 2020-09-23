#include <iostream>
using namespace std;

int main()
{
  double prezzo, iva, prezzo_finale=0;

  cout << "Inserisci il prezzo del prodotto: ";
  cin >> prezzo;

  cout << "Inserisci l'IVA da applicare: ";
  cin >> iva;

  prezzo_finale += prezzo + (prezzo*iva)/100;

  // Tramite precision() possiamo definire quante cifre
  // mostrare in output (sia parte decimale che intera).
  cout.precision(5);

  // Se invece vogliamo modificare solo la parte decimale,
  // allora dobbiamo aggiungere anche questa istruzione che
  // ci permette di operare solo sulle cifre decimali. 
  cout << fixed;

  cout << "Il prezzo finale corrisponde a: " << prezzo_finale << endl;

  return 0;
}
