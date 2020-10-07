#include <iostream>
using namespace std;

int main()
{
  int N;
  cout << "Inserisci massimo termine della sequenza armonica: ";
  cin >> N;

  double risultato = 0.0;

  for (int i = 0; i < N; i++) {
    risultato += 1.0/i;
  }

  cout << "Il risultato della serie armonica è: " << risultato << endl;

  return 0;
}
