#include <iostream>
#include <fstream>
#include <cstdlib>
#include "1-critta.h"

using namespace std;

int main(int argc, char* argv [])
{

  fstream input, output;
  int offset;
  char parola[256];
  bool criptare;

  // Se il numero di argomenti non è corretto. Termina l'esecuzione e
  // stampa un messaggio di errore all'utente.
  if (argc < 4)
  {
    cout << "Usage: caesar <input_file> <output_file> <offset>" << endl;
    exit(0);
  }

  // Chiedo all'utente cosa vuole fare
  char opzione;
  cout << "Vuoi crittare o decrittare il messagio? [c/d]: ";
  cin >> opzione;
  criptare = (opzione == 'c') ? true : false;

  // Converti l'offset in intero
  offset = atoi(argv[3]);

  // Apri il file di input e il file di output
  input.open(argv[1], ios::in);
  output.open(argv[2], ios::out);

  // Se il file di input non esiste, allora termina con un errore
  if (input.fail())
  {
    cout << "Il file " << argv[1] << " non esiste!" << endl;
    exit(1);
  }

  // Per ogni parola all'interno del file, critta/decritta il messaggio
  input >> parola;
  while (!input.eof()) {
      if (criptare)
        crypt(parola, offset);
      else
        decrypt(parola, offset);
      output << parola << " ";
      input >> parola;
  };
  output << endl;

  // Chiudi gli stream
  input.close();
  output.close();

  return 0;
}
