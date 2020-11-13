#include <iostream>
#include <cstring>
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

int main()
{
  char nome[20], cognome[20];
  int matricola;
  float media;

  cin >> nome >> cognome >> matricola >> media;

  Studente s = genera_studente(nome, cognome, matricola, media);
  stampa_studente(s);

  return 0;
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
