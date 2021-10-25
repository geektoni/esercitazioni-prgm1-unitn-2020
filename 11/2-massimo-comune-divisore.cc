#include <iostream>

using namespace std;

int mcd(int n1, int n2);

int main() {

    int n1, n2;
    cout << "Inserisci il primo numero: ";
    cin >> n1;
    cout << "Inserisci il secondo numero: ";
    cin >> n2;

    cout << "Il massimo comune divisore è " << mcd(n1, n2) << endl;
    return 0;
}



int mcd(int n1, int n2) {
  int returnValue;
  if (n2 == 0) {
    returnValue = n1;
  } else {
    returnValue = mcd(n2, n1 % n2);
  }
  return returnValue;
}
