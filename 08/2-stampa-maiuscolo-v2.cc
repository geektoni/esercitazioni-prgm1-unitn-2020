#include <iostream>
#include <cctype>

using namespace std;

int main() {

    char carattere;

    cout << "Inserisci una lettera minuscola: ";
    cin >> carattere;

    if (isalpha(carattere)) {
        char maiuscolo = toupper(carattere);
        cout << maiuscolo << endl;
    }
    return 0;
}