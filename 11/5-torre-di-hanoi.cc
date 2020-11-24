#include <iostream>

using namespace std;

void hanoi(int n, char partenza, char arrivo, char supporto);

int main() {

    int n;
    cout << "Inserire il numero di dischi: ";
    cin >> n;

    hanoi(n, 'A', 'C', 'B');

    return 0;
}

void hanoi(int n, char partenza, char arrivo, char supporto) {

    if (n == 1) {
        cout << "Sposta il disco dal paletto " << partenza << " al paletto " << arrivo << endl;
    }
    else {
        hanoi(n-1, partenza, supporto, arrivo);
        cout << "Sposta il disco dal paletto " << partenza << " al paletto " << arrivo << endl;
        hanoi(n-1, supporto, arrivo, partenza);
    }
}


