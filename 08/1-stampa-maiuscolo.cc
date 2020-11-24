#include <iostream>

using namespace std;

bool controllaCarattere(char carattere);
char converteCarattere(char carattere);

int main() {

    char carattere;
    cout << "Inserisci una lettera minuscola: " << endl;
    cin >> carattere;

    bool eLetteraMinuscola = controllaCarattere(carattere);

    if (eLetteraMinuscola) {
        cout << converteCarattere(carattere);
    }

    return 0;
}

bool controllaCarattere(char carattere) {

    bool risultato;
    if (carattere <= 'z' && carattere >= 'a') {
        risultato = true;
    }
    else {
        risultato = false;
    }

    return risultato;
}

char converteCarattere(char carattere) {
    
    char carattereMaiuscolo;
    carattereMaiuscolo = carattere + ( (int) 'A' -  (int) 'a');
    return carattereMaiuscolo; 
}