#include <iostream>
using namespace std;

int main()
{
  char carattere;
  cout << "Inserisci un carattere: ";
  cin >> carattere;

  switch (carattere) {

    case 'A': case 'E': case 'I': case 'O': case 'U':
    case 'a': case 'e': case 'i': case 'o': case 'u':
      cout << "Il carattere " << carattere << " è una vocale!" << endl;
      break;

    default:
    cout << "Il carattere " << carattere << " è una consonante!" << endl;
    break;
  }

  return 0;
}
