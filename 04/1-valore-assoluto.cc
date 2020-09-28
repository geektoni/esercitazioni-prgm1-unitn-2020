#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int valore_assoluto = (a-b)*((a>b)-(b>a));

  cout << "Valore assoluto asb(" << a << "-" << b << ") = " << valore_assoluto << endl;

  return 0;
}
