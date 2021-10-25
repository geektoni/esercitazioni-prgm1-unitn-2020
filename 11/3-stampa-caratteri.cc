#include <iostream>

using namespace std;

void stampaCaratteri(char a1, char a2);

int main() {

    char a1, a2;
    cout << "Inserisci un primo carattere: ";
    cin >> a1;
    cout << "Inserisci un secondo carattere: ";
    cin >> a2;

    stampaCaratteri(a1, a2);

    return 0;
}

void stampaCaratteri(char a1, char a2) {
    
    if (a1 > a2) {
        return;
    }
    stampaCaratteri(a1 + 1, a2);
    cout << a1 << " ";
}

