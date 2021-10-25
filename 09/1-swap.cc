#include <iostream>

using namespace std;

void swap(double * n1, double * n2);

int main() {

    double n1, n2;
    cout << "Inserisci due numeri:" << endl;
    cin >> n1 >> n2;

    swap(&n1, &n2);

    cout << "n1 " << n1 << ", n2 " << n2;

    return 0;
}

void swap(double * n1, double * n2) {

    // Scambio il valore di n1 e n2 facendo dereference
    // dei due puntatori originari.

    double temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
