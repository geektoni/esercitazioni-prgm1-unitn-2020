#include <iostream>

using namespace std;

int somma_cifre(int numero);

int main() {

  int numero;

  cout << "Inserisci un numero: ";
  cin >> numero;

  cout << somma_cifre(numero) << endl;

  return 0;
}

int somma_cifre(int numero) {

    if (numero == 0) {
      return 0;
    }

    return (numero%10 + somma_cifre(numero/10));

}
