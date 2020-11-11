#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

// Questa funzione ordina un array. Implementa l'algoritmo
// bubblesort
void sort_array(float array [], int length)
{
  for(int i=0; i<length; i++)
  {
    for (int j=0; j<length; j++)
    {
      if (array[i] > array[j])
      {
        float tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
      }
    }
  }
}

int main(int argc, char * argv [])
{

  fstream input;
  int DIM = atoi(argv[2]);

  // Definisco un array dinamico in cui andremo a salvare
  // le temperature del file
  float * temperature = new float[DIM];

  int temp_contatore = 0;

  input.open(argv[1], ios::in);
  char tmp[256];
  input >> tmp;
  while(!input.eof())
  {
    temperature[temp_contatore] = atof(tmp);
    temp_contatore++;
    input >> tmp;
  }

  sort_array(temperature, DIM);

  for(int i=0; i<10; i++)
  {
    cout << temperature[i] << endl;
  }

  delete[] temperature;

  return 0;
}
