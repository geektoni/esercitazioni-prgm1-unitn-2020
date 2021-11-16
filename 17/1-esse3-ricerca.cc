#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

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

int main (int argc, char * argv[]) {

    if (argc != 3) {
        cout << "Usage: ./a.out <file> <dim>" << endl;
        exit(0);
    }
    
    int dim = atoi(argv[2]);
    Studente * database = new Studente[dim];
    
    int risultato = riempi_database(database, argv[1], dim);
    
    if (!risultato) {
    	cout << "Errore" << endl;
    } else {
        stampa_studente(database[studente_top_media(database, dim)])
        ;
    }
    
    delete[] database;


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





















