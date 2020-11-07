#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
  if (argc < 2)
  {
    cout << "Usage: leggere <input_file>" << endl;
  }

  fstream input;
  input.open(argv[1], ios::in);

  if (input.fail())
  {
    cout << "Il file dato in input " << argv[1] << " non esiste!" << endl;
  }

  char buffer[256];
  input >> buffer;
  while(!input.eof())
  {
    cout << buffer << " ";
    input >> buffer;
  }
  cout << endl;

  input.close();

  return 0;
}
