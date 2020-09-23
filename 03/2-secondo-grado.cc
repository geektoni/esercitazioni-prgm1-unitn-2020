#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float a, b, c;
  cout << "Inserisci i coefficienti dell'equazione (ax^2 + bx + c=0): ";
  cin >> a >> b >> c;

  float delta = b * b - 4*a*c;

  cout << "Il delta della nostra equazione è: " << delta << endl;

  float first_solution = (-b - sqrt(delta))/(2*a);
  float second_solution = (-b + sqrt(delta))/(2*a);

  cout << "Le soluzioni di questa equazione sono: " << first_solution << " " << second_solution << endl;

  return 0;
}
