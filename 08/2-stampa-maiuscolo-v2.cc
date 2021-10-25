#include <iostream>

using namespace std;

bool controllaCarattere(char carattere);
void convertiCarattere(char & carattere);

int main() {

    char carattere;
    cout << "Inserisci una lettera minuscola: " << endl;
    cin >> carattere;

    bool is_lowercase = controllaCarattere(carattere);

    if (is_lowercase) {
        convertiCarattere(carattere);
        cout << carattere << endl;
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

    // Una versione meno prolissa è la seguente:
    // return carattere <= 'z' && carattere >= 'a'

    return risultato;
}

// La variabile carattere viene passata per riferimento, quindi
// eventuali modifiche fatte a questa variabile verranno riflesse
// sulla variabile originaria (vedi l'utilizzo di questa funzione
// nel main).
char convertiCarattere(char & carattere) {

    // Converto il carattere da minuscolo a maiuscolo
    // usando le caratteristiche della codifica.

    char carattereMaiuscolo;
    carattereMaiuscolo = carattere + ('A' - 'a');
    return carattereMaiuscolo;
}
