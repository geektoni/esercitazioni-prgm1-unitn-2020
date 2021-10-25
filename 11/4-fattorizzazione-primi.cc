#include <iostream>
using namespace std;

/*
  Definisco quattro funzioni:
  - primo(): indica se un numero è primo o meno.
  - primo_impl(): implementazione del controllo di primalità.
  - trovaDivisori(): stampa a video i fattori primi del numero.
  - trovaDivisori_impl(): implementa la funzione ricorsiva per stampare i fattori primi
*/

bool primo(int n);
bool primo_impl(int n, int div);
void trovaDivisori_impl(int n, int j);
void trovaDivisori(int n);

int main() {

    int n;
    cout << "Inserisci un numero: ";
    cin >> n;

    trovaDivisori(n);

    return 0;
}

/* Funzioni wrapper che chiamano le funzioni ricorsive*/

void trovaDivisori(int n) {
  trovaDivisori_impl(n, 2);
}

bool primo(int n) {
  return primo_impl(n, 2);
}

/* Implementazione delle funzioni ricorsive */

bool primo_impl(int n, int div) {

  bool risultato = true;

  // Se il divisore è uguale ad n, allora siamo arrivati alla
  // fine e possiamo terminare l'esecuzione.
  if (div == n) {
    return risultato;
  } else {
    if ((n%div) == 0) {
      risultato = false;
    } else {
      risultato = primo_impl(n, div+1);
    }
  }
  return risultato;
}

void trovaDivisori_impl(int n, int div) {

  // Se il mio numero è maggiore del divisore, allora terminiamo.
  if (n < div) {
    return;
  } else {
    if (primo(div)) {
      if (n%div == 0) {
        cout << div << endl;
        trovaDivisori_impl(n/div, 2);
      } else {
        // In caso il numero sia primo, ma non sia un divisore, allora continuiamo
        // con il numero successivo.
        trovaDivisori_impl(n, div+1);
      }
    } else {
      // Nel caso il numero non sia primo, allora continuiamo con il prossimo divisore.
      trovaDivisori_impl(n, div+1);
    }
  }
}
