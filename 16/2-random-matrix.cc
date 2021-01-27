#include <iostream>
#include <cstdlib>
using namespace std;

int ** generate_matrix(int R, int C);

int main(int argc, char * argv[])
{
  // Inizializzo il generatore di numeri casuali
  srand(time(NULL));

  // Controllo degli argomenti
  if (argc != 3)
  {
    cout << "Usage: random-matrix <R> <C>" << endl;
    exit(0);
  }

  // Ottengo la grandezza dell'array e lo genero
  int R = atoi(argv[1]);
  int C = atoi(argv[2]);
  int ** matrix = generate_matrix(R, C);

  // Stampo a video il contenuto della matrice
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cout << matrix[i][j] << "\t";
    }
    cout << endl;
  }
  cout << endl;

  // IMPORTANTE! Dealloco la matrice generata prima di uscire
  for (int i = 0; i < R; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;

  return 0;
}

int ** generate_matrix(int R, int C)
{
  // Alloco la memoria necessaria per la matrice
  int ** matrix = new int*[R];
  for (int i = 0; i < R; i++) {
      matrix[i] = new int[C];
  }

  // Riempio la matrice con i valori necessari
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      matrix[i][j] = rand() % 100;
    }
  }

  return matrix;
}
