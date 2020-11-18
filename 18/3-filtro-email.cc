#include <iostream>
#include <fstream>
#include "3-email_modulo.h"
using namespace std;

const int MAX_DIM = 81;

int main(int argc, char * argv[])
{
  fstream input, output;
  char indirizzo[81];

  input.open(argv[1], ios::in);
  output.open(argv[2], ios::out);

  input >> indirizzo;
  while(!input.eof())
  {
    if (is_email(indirizzo))
      output << indirizzo << endl;
    input >> indirizzo;
  }

  input.close();
  output.close();

  return 0;
}
