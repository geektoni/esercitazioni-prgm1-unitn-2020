#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double N;
  cout << "Inserisci massima approsimazione: ";
  cin >> N;

  double risultato = 0.0;
  double pi_greco = 0.0;
  double pi_greco_p = 0.0;

  int i=0;
  do {
    risultato += pow(-1, i) * 1.0/(2*i + 1);
    pi_greco_p = pi_greco;
    pi_greco = risultato*4;

    cout << "Differenza: " << abs(pi_greco-pi_greco_p) << "\r";

    i++;

  } while (abs(pi_greco-pi_greco_p) > N);

  cout.precision(10);
  cout << "Il risultato dell'approsimazione è: " << fixed << pi_greco << endl;

  return 0;
}
