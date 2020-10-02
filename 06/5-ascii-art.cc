#include <iostream>
using namespace std;

int main()
{

  int n;
  cout << "Inserisci l'altezza del triangolo: ";
  cin >> n;

  // L'idea è quella di stampare una serie di spazi e carattere
  // asterisco così da avere su ogni riga n caratteri totali.
  //
  // Devo prima stampare n-i spazi e poi un numero dispari di asterischi.
  // Per avere un numero dispari, basta moltiplicare i*2 e sottrarre 1.
  // Così facendo, potrò stampare entrambi i lati dell'albero.
  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= n-i; j++) {
      cout << " ";
    }

    for (int j=1; j<=2*i-1; j++) {
       cout<<"*";
    }
    cout << endl;
  }

  return 0;
}
