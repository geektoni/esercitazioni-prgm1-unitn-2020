#include <iostream>
using namespace std;

int main() {

  int ore, minuti, secondi;
  cin >> ore >> minuti >> secondi;

  int secondi_a_mezzanotte = ore*3600 + minuti*60 +secondi;

  cout << "Secondi a mezzanotte: " << secondi_a_mezzanotte << endl;

  return 0;
}
