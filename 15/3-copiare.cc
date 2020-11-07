#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
  if (argc < 3)
  {
    cout << "Usage: copiare <input_file> <output_file>" << endl;
  }

  fstream input, output;
  input.open(argv[1], ios::in);
  output.open(argv[2], ios::out);

  if (input.fail())
  {
    cout << "Il file dato in input " << argv[1] << " non esiste!" << endl;
  }

  char buffer[256];
  input >> buffer;
  while(!input.eof())
  {
    output << buffer << " ";
    input >> buffer;
  }
  output << endl;

  output.close();
  input.close();

  return 0;
}
