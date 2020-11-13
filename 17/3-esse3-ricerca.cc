#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct Studente
{
  char nome [30];
  char cognome [30];
  int matricola;
  float media;
};

void stampa_studente(const Studente & s);
Studente genera_studente(char nome[], char cognome[], int matricola,float media_ponderata);
int riempi_database(Studente * database, char file []);
int cerca_matricola(Studente * database, int matricola, int DIM);
int cerca_nome_e_cognome(Studente * database, char * nome, char * cognome, int DIM);
int studente_top_media(Studente * database, int DIM);

int main(int argc, char * argv[])
{
  // Creo il database
  int N_STUDENTI = atoi(argv[2]);
  Studente * database = new Studente[N_STUDENTI];

  // Riempio il database con il file
  int inseriti = 0;
  inseriti = riempi_database(database, argv[1]);

  // Controllo che l'inserimento sia andato a buon fine
  if (inseriti == -1)
  {
    cout << "Il file con gli studenti non esiste" << endl;
    exit(1);
  }

  // Stampo lo studente con la matricola trovata
  int indice = cerca_matricola(database, 13445, inseriti);
  if (indice != -1)
    stampa_studente(database[indice]);

  return 0;
}

int cerca_matricola(Studente * database, int matricola, int DIM)
{
  for (int i = 0; i < DIM; i++) {
    if (database[i].matricola == matricola)
    {
      return i;
    }
  }
  return -1;
}


int cerca_nome_e_cognome(Studente * database, char * nome, char * cognome,  int DIM)
{
  for (int i = 0; i < DIM; i++) {
    if (strcmp(database[i].nome, nome)==0 && strcmp(database[i].cognome, cognome)==0)
    {
      return i;
    }
  }
  return -1;
}

int studente_top_media(Studente * database,  int DIM)
{
  int indice = 0;
  for (int i = 1; i < DIM; i++) {
    if (database[indice].media < database[i].media)
    {
      indice = i;
    }
  }
  return indice;
}

int riempi_database(Studente * database, char file [])
{
  int studenti_inseriti = 0;
  fstream input;
  input.open(file, ios::in);
  if (input.fail())
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
