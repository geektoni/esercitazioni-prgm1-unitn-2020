#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
  srand(time(NULL));
  int rand_number = rand()%10 + 1;

  int guess=-1;

  // Come condizione di terminazione, noi controlliamo che il numero
  // inserito dall'utente sia uguale al numero random generato.
  while (guess != rand_number)
  {
    cout << "Che numero ho pensato?: ";
    cin >> guess;

    // Possiamo anche aggiungere con un istruzione condizionale if
    // dei suggerimenti che possono rendere più facile l'individuazione
    // del numero.
    if (guess > rand_number)
    {
      cout << "Acqua! Numero troppo grande" << endl;
    } else {
      cout << "Fuochino! Numero troppo piccolo" << endl;
    }

  }

  cout << "Complimenti! Il numero che ho pensato era proprio" << rand_number << endl;

  return 0;
}
