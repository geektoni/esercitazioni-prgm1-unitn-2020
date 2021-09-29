#include <iostream>
#include <cmath>

using namespace std;

int main () {
 
  int a, b;

  cout << "Inserisci il valore di 'a': ";
  cin >> a;
  cout << "Inserisci il valore di 'b': ";
  cin >> b;
 
  int massimo = a*(a>=b) + b*(a<b);
  int minimo = (a+b)-massimo;
  cout << "Il valore massimo e' " << massimo << ", il minimo " << minimo << endl;

  // Soluzione con IF-ELSE
  if (a >= b) {
    massimo = a;
    minimo = b;
  } else {
    massimo = b;
    minimo = a;
  }
  cout << "Il valore massimo e' " << massimo << ", il minimo " << minimo << endl;

  // Soluzione con libreria
  cout << "Il valore massimo e' " << max(a,b) << ", il minimo " << min(a,b) << endl;

  return 0;
}