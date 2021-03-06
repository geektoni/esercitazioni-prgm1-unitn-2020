#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

static const int MAX_DATABASE = 100;

struct Studente
{
  char nome [30];
  char cognome [30];
  int matricola;
  float media;
};

void stampa_studente(const Studente & s);
Studente genera_studente(char nome[], char cognome[], int matricola,float media_ponderata);
int riempi_database(Studente * database, char file [], int inseriti);

int main(int argc, char * argv[])
{
  // Creo il database
  Studente * database = new Studente[MAX_DATABASE];

  // Riempio il database con il file
  int inseriti = 0;
  inseriti = riempi_database(database, argv[1], inseriti);

  // Controllo che l'inserimento sia andato a buon fine
  if (inseriti == -1)
  {
    cout << "Il file con gli studenti non esiste o il database è pieno" << endl;
    exit(1);
  }

  // Stampo il primo studente
  stampa_studente(database[0]);

  return 0;
}

int riempi_database(Studente * database, char file [], int inseriti)
{
  int studenti_inseriti = inseriti;
  fstream input;
  input.open(file, ios::in);
  if (input.fail())
  {
    return -1;
  }

  // Non posso inserire studenti perchè il database è pieno
  if (inseriti >= MAX_DATABASE)
  {
    return -1;
  }

  char nome[20], cognome[20];
  int matricola;
  float media;

  // Inserisco gli studenti all'interno del database
  input >> nome >> cognome >> matricola >> media;
  while(!input.eof())
  {
    database[studenti_inseriti] = genera_studente(nome, cognome, matricola, media);
    studenti_inseriti += 1;
    input >> nome >> cognome >> matricola >> media;
  }
  return studenti_inseriti;
}

void stampa_studente(const Studente & studente)
{
  cout << "Studente (" << studente.matricola << "):" << endl;
  cout << "\tNome: " << studente.nome << endl;
  cout << "\tCognome: " << studente.cognome << endl;
  cout << "\tMedia: " << studente.media << endl;
};

Studente genera_studente(char * nome, char * cognome, int matricola, float media_ponderata)
{
  Studente s;
  strcpy(s.nome, nome);
  strcpy(s.cognome, cognome);
  s.matricola = matricola;
  s.media = media_ponderata;
  return s;
};
