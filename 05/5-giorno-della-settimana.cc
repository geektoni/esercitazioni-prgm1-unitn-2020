#include <iostream>
using namespace std;

int main()
{
  enum settimana {
    monday=1, tuesday, wednesday,
    thursday, friday, saturday, sunday
  };

  int giorno;
  cout << "Inserisci un giorno della settimana (1-7): ";
  cin >> giorno;

  switch(giorno)
  {
    case monday:
      cout << "Oggi è lunedì" << endl;
      break;
    case tuesday:
      cout << "Oggi è martedì" << endl;
      break;
    case wednesday:
      cout << "Oggi è mercoledì" << endl;
      break;
    case thursday:
      cout << "Oggi è giovedì" << endl;
      break;
    case friday:
      cout << "Oggi è venerdì" << endl;
      break;
    case saturday:
      cout << "Oggi è sabato" << endl;
      break;
    case sunday:
      cout << "Oggi è domenica" << endl;
      break;
    default:
      cout << "Giorno non riconosciuto" << endl;
  }

  return 0;
}
