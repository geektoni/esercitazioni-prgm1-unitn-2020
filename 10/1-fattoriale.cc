#include <iostream>

using namespace std;

int fattoriale(int n);

int main() {

    int n;
    cout << "Inserisci un numero: ";
    cin >> n;

    cout << "Il fattoriale è " << fattoriale(n) << endl;
    return 0;
}

int fattoriale(int n) {

    int returnValue;
    if (n == 0) {
        returnValue = 1;
    }
    else {
        returnValue = n * fattoriale(n-1);
    }

    return returnValue;
}