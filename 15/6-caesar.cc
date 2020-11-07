#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;

void caesar(char letter [], int offset, bool criptare);

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
    cout << "Usage: caesar <input_file> <offset> <output_file>" << endl;
    exit(0);
  }

  // Chiedo all'utente cosa vuole fare
  char opzione;
  cout << "Vuoi crittare o decrittare il messagio? [c/d]: ";
  cin >> opzione;
  criptare = (opzione == 'c') ? true : false;

  // Converti l'offset in intero
  offset = atoi(argv[2]);

  // Apri il file di input e il file di output
  input.open(argv[1], ios::in);
  output.open(argv[3], ios::out);

  // Se il file di input non esiste, allora termina con un errore
  if (input.fail())
  {
    cout << "Il file " << argv[1] << " non esiste!" << endl;
    exit(1);
  }

  // Per ogni parola all'interno del file, critta/decritta il messaggio
  input >> parola;
  while (!input.eof()) {
      caesar(parola, offset, criptare);
      output << parola << " ";
      input >> parola;
  };
  output << endl;

  // Chiudi gli stream
  input.close();
  output.close();

  return 0;
}

void caesar(char parola [], int offset, bool cripta)
{
  for (unsigned int i=0; i<strlen(parola); i++)
  {
    // Converti solo i caratteri che sono lettere
    if ((parola[i] >= 'a' && parola[i] <= 'z') || ( parola[i] >= 'a' && parola[i] <= 'z'))
    {
        if (cripta)
          parola[i] = (parola[i]+offset);
        else
          parola[i] = (parola[i]-offset);
    }
  }
}
