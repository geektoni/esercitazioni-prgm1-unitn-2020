#include <iostream>
using namespace std;

int main() {

  int secondi_a_mezzanotte;
  cin >> secondi_a_mezzanotte;

  int ore, minuti, secondi;
  ore = secondi_a_mezzanotte/3600;
  minuti = (secondi_a_mezzanotte % 3600)/60;
  secondi = (secondi_a_mezzanotte % 3600) % 60;

  cout << "Ore: " << ore << ", minuti: " << minuti << ", secondi: " << secondi << endl;

  return 0;
}
