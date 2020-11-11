#include <iostream>
#include <cstdlib>
using namespace std;

int * generate_numbers(int N);

int main(int argc, char * argv[])
{
  // Inizializzo il generatore di numeri casuali
  srand(time(NULL));

  // Controllo degli argomenti
  if (argc != 2)
  {
    cout << "Usage: random-array <N>" << endl;
    exit(0);
  }

  // Ottengo la grandezza dell'array e lo genero
  int N = atoi(argv[1]);
  int * array = generate_numbers(N);

  // Stampo a video il contenuto dell'array
  for (int i = 0; i < N; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  // IMPORTANTE! Dealloco l'array generato prima di uscire
  delete [] array;

  return 0;
}

int * generate_numbers(int N)
{
  int * array = new int[N];
  for (int i = 0; i < N; i++) {
    array[i] = rand() % 100;
  }
  return array;
}
