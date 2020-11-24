#include <iostream>

using namespace std;

void stampaPari(int n);
void stampaDispari(int n);

int main() {

    int n;
    cout << "Inserisci un numero: ";
    cin >> n;

    stampaPari(n);

    return 0;
}

void stampaPari(int n) {
    if (n == 0) {
        cout << n << " ";
    }
    else {
        stampaDispari(n-1);
        cout << n << " ";
    }
}


void stampaDispari(int n) {
    stampaPari(n-1);
    cout << n << " ";
}


