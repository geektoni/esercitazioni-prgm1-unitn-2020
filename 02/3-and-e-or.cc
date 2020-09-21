#include <iostream>
using namespace std;

int main() {

  bool a, b;

  a = true; b = true;
  cout << "Tabella verità AND" << endl;
  cout << (a && b) << endl;
  cout << (!a && b) << endl;
  cout << (a && !b) << endl;
  cout << (!a && !b) << endl;
  cout << endl;

  a = true; b = true;
  cout << "Tabella verità OR" << endl;
  cout << (a || b) << endl;
  cout << (!a || b) << endl;
  cout << (a || !b) << endl;
  cout << (!a || !b) << endl;

  return 0;
}
