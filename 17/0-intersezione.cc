#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

// Massimo numero di parole presenti in un file
const int MAX_PAROLE = 1000;

// Massimo numero di caratteri presenti in un file
const int MAX_CARATTERI = 101;

// Questa funzione controlla se esiste questa parola all'interno di un
// dizionario
bool trova_parola(char parola [], char dizionario[][MAX_CARATTERI] , int dict_dimensione)
{
  bool trovato = false;
  for (int i = 0; i < dict_dimensione && !trovato; i++) {
    if (strcmp(parola, dizionario[i]) == 0){
      trovato = true;
    }
  }
  return trovato;
}

int main(int argc, char * argv[])
{

  char parole[MAX_PAROLE][MAX_CARATTERI];
  char intersezione[MAX_PAROLE][MAX_CARATTERI];

  int parole_contatore = 0;
  int intersezione_contatore = 0;

  fstream primo, secondo;
  fstream output;

  if (argc != 4)
  {
    cout << "Usage: intersezione <primo_file> <secondo_file> <output>" << endl;
    exit(1);
  }

  primo.open(argv[1], ios::in);
  secondo.open(argv[2], ios::in);
  output.open(argv[3], ios::out);

  if (primo.fail() || secondo.fail())
  {
    cout << "Uno dei file in input non esiste!" << endl;
  }

  char tmp[MAX_CARATTERI];
  primo >> tmp;

  // Leggo il primo file
  while(!primo.eof())
  {
    strcpy(parole[parole_contatore], tmp);
    parole_contatore++;
    primo >> tmp;
  }

  // Leggo il secondo file e al contempo cerco tutte le parole
  // in comune con il primo file
  secondo >> tmp;
  while(!secondo.eof())
  {
    if(trova_parola(tmp, parole, parole_contatore))
    {
      strcpy(intersezione[intersezione_contatore], tmp);
      intersezione_contatore++;
    }
    secondo >> tmp;
  }

  // Salvo tutte le parole in comune trovare all'interno del
  // file in output (ognuna su una nuova linea)
  for (int i = 0; i < intersezione_contatore; i++) {
    output << intersezione[i] << endl;
  }

  primo.close();
  secondo.close();
  output.close();

  return 0;
}
