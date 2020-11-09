#include <iostream>
#include <cstdlib>
using namespace std;

float calcola(float a, float b, char operazione)
{
  float risultato;
  switch (operazione) {
    case '+':
      risultato = a + b;
      break;
    case '-':
      risultato = a - b;
      break;
    case '/':

      // Controllo che la divisione si possa fare
      if (b == 0) {
        cout << "Stai cercando di dividere per 0!" << endl;
        exit(0);
      }

      risultato = a/b;
      break;
    case 'x':
      risultato = a*b;
      break;
    default:
      cout << "L'operazioni inserita non è stata riconosciuta!" << endl;
      exit(0);
  }
  return risultato;
}

int main(int argc, char * argv [])
{
  float a, b, risultato;
  char operazione;

  // Controllo che siano stati dati gli argomenti corretti
  if (argc != 4)
  {
    cout << "Usage: calcolatrice <a> <b> <operazione>" << endl;
    exit(0);
  }

  // Converto i due numeri dati in input in interi
  a = atof(argv[1]);
  b = atof(argv[2]);

  // Per ottenere l'operazione, prendo solo il primo carattere
  operazione = argv[3][0];

  // Calcolo il risultato
  risultato = calcola(a, b, operazione);

  cout << "Il risultato è " << risultato << endl;

  return 0;
}
