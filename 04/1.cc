#include <iostream>

using namespace std;

int main () {

    bool a, b;

    cout << "Inserisci il valore di 'a': ";
    cin >> a;
    cout << "Inserisci il valore di 'b': ";
    cin >> b;

    cout << "L'implicazione 'a -> b' ha valore " << (!a || b) << endl;

    // Soluzione con IF-ELSE
    /*if (a && !b) {
        cout << "L'implicazione 'a -> b' e' falsa" << endl;
    } else {
        cout << "L'implicazione 'a -> b' e' vera" << endl;
    }*/

    return 0;
}