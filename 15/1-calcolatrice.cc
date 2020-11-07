#include <iostream>
#include <cstdlib>
using namespace std;

int calcola(int a, int b, char operazione)
{
  int risultato;
  switch (operazione) {
    case '+':
      risultato = a + b;
      break;
    case '-':
      risultato = a - b;
      break;
    case '/':
      risultato = a/b;
      break;
    case '*':
      risultato = a*b;
      break;
    default:
      risultato = 0;
  }
  return risultato;
}

int main(int argc, char * argv [])
{
  int a, b, risultato;

  if (argc != 4)
  {
    cout << "Usage: calcolatrice <a> <b> <operazione>" << endl;
    exit(0);
  }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  risultato = calcola(a, b, argv[3][0]);

  cout << "Il risultato è " << risultato << endl;

  return 0;
}
