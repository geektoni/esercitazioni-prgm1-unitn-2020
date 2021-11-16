#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

static const int MAX_DATABASE = 100;

struct Studente {
    char nome[30];
    char cognome[30];
    int matricola;
    float media;
};

void stampa_studente(const Studente & s);
Studente genera_studente(char nome[], char cognome[], int matricola, float media);
bool riempi_database(Studente * database, char file [], int dim);
int cerca_matricola(Studente * database, int matricola, int dim);
int cerca_nome_e_cognome(Studente * database, char nome[], char cognome[], int dim);
int studente_top_media(Studente * database, int dim);


int main() {

    Studente database[MAX_DATABASE];
    int inseriti = 0;

    char azione = 'k';
    while(azione != 'e') {
        cout << "[ESSE3++] Cosa vuoi fare? (i/l/f/m/n/t/e): ";
        cin >> azione;
        switch (azione) {
            case 'i': 
                {
                    if (inseriti == MAX_DATABASE)
                        cout << "[ESSE3++] Raggiunta la dimensione massima del database!" << endl;
                    else {
                        char nome[30], cognome[30];
                        int matricola;
                        float media;
                        cout << "[ESSE3++] Inserisci i dati dell'utente: ";
                        cin >> nome >> cognome >> matricola >> media;
                        Studente s_tmp = genera_studente(nome, cognome, matricola, media);
                        database[inseriti] = s_tmp;
                        inseriti++;
                    }
                    
                }
                break;
            case 'l': 
                {
                    int indice;
                    cout << "[ESSE3++] Inserisci l'indice dell'utente che vuoi leggere: ";
                    cin >> indice;
                    if (indice >= inseriti)
                        cout << "[ESSE3++] L'utente con questo indice non esiste!" << endl;
                    else
                        stampa_studente(database[indice]);
                }
                break;
            case 'f': 
                {
                    char file[30];
                    int dim;
                    cout << "[ESSE3++] Inserisci il nome del file: ";
                    cin >> file;
                    cout << "[ESSE3++] Inserisci il numero di righe del file: ";
                    cin >> dim;
                    inseriti = riempi_database(database, file, dim);
                }
                break;
            case 'm': 
                {
                    int matricola;
                    cout << "[ESSE3++] Inserisci la matricola da cercare: ";
                    cin >> matricola;
                    int indice = cerca_matricola(database, matricola, inseriti);
                    if (indice != -1)
                        stampa_studente(database[indice]);
                    else
                        cout << "[ESSE3++] Studente non trovato!" << endl;
                }
                break;
            case 'n': 
                {
                    char nome[30], cognome[30];
                    cout << "[ESSE3++] Inserisci nome e cognome da cercare: ";
                    cin >> nome >> cognome;
                    int indice = cerca_nome_e_cognome(database, nome, cognome, inseriti);
                    if (indice != -1)
                        stampa_studente(database[indice]);
                    else
                        cout << "[ESSE3++] Studente non trovato!" << endl;
                }
                break;
            case 't': 
                {
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


int studente_top_media(Studente * database, int dim) {
    float max = 0;
    int indice = 0;
    for (int i = 0 ; i < dim ; i++) {
    	if (database[i].media > max) {
    	    indice = i;
    	    max = database[i].media;
    	}
    }
    return indice;
}


int cerca_nome_e_cognome(Studente * database, char nome[], char cognome[], int dim) {
    int indice = -1;
    for (int i = 0; (i < dim) && (indice == -1); i++) {
        if (strcmp(database[i].nome, nome) == 0 && strcmp(database[i].cognome, cognome) == 0) {
            indice = i;
        }
    }
    return indice;
}


int cerca_matricola(Studente * database, int matricola, int dim) {
    int indice = -1;
    for (int i = 0 ; (i < dim) && (indice == -1) ; i++) {
    	if (database[i].matricola == matricola) {
    	    indice = i;
    	}
    }
    return indice;
}


bool riempi_database(Studente * database, char file [], int dim) {
    bool risultato;
    fstream input;
    input.open(file, ios::in);
    if (input.fail()) {
    	cout << "Errore nella lettura del file" << endl;
    	risultato = false;
    } else {
    
        int indice = 0;
        
    	char nome[30], cognome[30];
    	int matricola;
    	float media;
    	
    	input >> nome >> cognome >> matricola >> media;
    	while (!input.eof()) {
    	    Studente temp = genera_studente(nome, cognome, matricola, media);
    	    database[indice] = temp;
    	    indice++;
    	    input >> nome >> cognome >> matricola >> media;    
    	}
    	risultato = true;
    }
    input.close();

    return risultato;
}


void stampa_studente(const Studente & s) {
    cout << "Studente (matricola: " << s.matricola << ") :" << endl;
    cout << "\tNome: " << s.nome << endl;
    cout << "\tCognome: " << s.cognome << endl;
    cout << "\tMedia: " << s.media << endl;
}

Studente genera_studente(char * nome, char * cognome, int matricola, float media) {
    Studente s;
    s.matricola = matricola;
    s.media = media;
    strcpy(s.nome, nome);
    strcpy(s.cognome, cognome);
    return s;
}