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
int cerca_matricola(Studente * database, int matricola, int DIM);
int cerca_nome_e_cognome(Studente * database, char * nome, char * cognome, int DIM);
int studente_top_media(Studente * database, int DIM);
int aggiungi_studente(Studente * database, Studente s, int DIM);

int main(int argc, char * argv[])
{
  // Creo il database
  Studente * database = new Studente[MAX_DATABASE];
  int inseriti = 0;

  char azione = 'k';
  while(azione != 'e')
  {
    cout << "[ESSE3++] Cosa vuoi fare? (i/l/f/m/n/t/e): ";
    cin >> azione;
    switch (azione) {
      case 'i': {
        char nome[20], cognome[20];
        int matricola;
        float media;
        cout << "[ESSE3++] Inserisci i dati dell'utente: ";
        cin >> nome >> cognome >> matricola >> media;
        Studente s_tmp = genera_studente(nome, cognome, matricola, media);
        inseriti = aggiungi_studente(database, s_tmp, inseriti);
        if (inseriti == -1)
        {
          cout << "[ESSE3++] Raggiunta la dimensione massima del database!" << endl;
        }
      }
        break;
      case 'l': {
        int indice;
        cout << "[ESSE3++] Inserisci l'indice dell'utente che vuoi leggere: ";
        cin >> indice;
        if (indice > inseriti)
        {
          cout << "[ESSE3++] L'utente con questo indice non esiste!" << endl;
        } else {
          stampa_studente(database[indice]);
        }
      }
        break;
      case 'f': {
        char file[20];
        cout << "[ESSE3++] Inserisci il nome del file: ";
        cin >> file;
        inseriti = riempi_database(database, file, inseriti);
        // Controllo che l'inserimento sia andato a buon fine
        if (inseriti == -1)
        {
          cout << "[ESSE3++] Il file con gli studenti non esiste o il database è pieno" << endl;
        }
      }
        break;
      case 'm': {
        int matricola;
        cout << "[ESSE3++] Inserisci la matricola da cercare: ";
        cin >> matricola;
        // Stampo lo studente con la matricola trovata
        int indice = cerca_matricola(database, matricola, inseriti);
        if (indice != -1)
          stampa_studente(database[indice]);
        else
          cout << "[ESSE3++] Studente non trovato!" << endl;
        }
        break;
      case 'n': {
        char nome[20], cognome[20];
        cout << "[ESSE3++] Inserisci nome e cognome da cercare: ";
        cin >> nome >> cognome;
        int indice = cerca_nome_e_cognome(database, nome, cognome, inseriti);
        if (indice != -1)
          stampa_studente(database[indice]);
        else
          cout << "[ESSE3++] Studente non trovato!" << endl;
        }
        break;
      case 't': {
        int indice = studente_top_media(database, inseriti);
        if (indice != -1)
          stampa_studente(database[indice]);
        else
          cout << "[ESSE3++] Studente non trovato!" << endl;
      }
      break;
      case 'e':
        cout << "[ESSE3++] Arrivederci!" << endl;
        break;
      default:
        cout << "[ESSE3++]  Comando non riconosciuto!" << endl;
    }
  }

  return 0;
}

int aggiungi_studente(Studente * database, Studente s, int DIM)
{
  if (DIM >= MAX_DATABASE)
    return -1;

  database[DIM] = s;
  return ++DIM;
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
