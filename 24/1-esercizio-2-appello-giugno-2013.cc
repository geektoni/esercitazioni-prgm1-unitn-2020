#include <iostream>

using namespace std;

int* creaVettore(int n);
void numeriEsagonali(int vettore[], int n, int i = 0);
void stampaVettore(int vettore[], int n, int i = 0);

int main() {

    int n;
    cout << "Inserisci N: ";
    cin >> n;

    int * vettore = creaVettore(n);
    stampaVettore(vettore, n);

    delete [] vettore;

    return 0;
}


int* creaVettore(int n) {
    int * vettore = new int[n];
    numeriEsagonali(vettore, n);
    return vettore;
}

void numeriEsagonali(int vettore[], int n, int i) {
    if (i >= n) {
        cout << "costruzione terminata" << endl;
    }
    else {
        vettore[i] = i*(2*i-1);
        i++;
        numeriEsagonali(vettore, n, i);
    }
}


void stampaVettore(int vettore[], int n, int i) {
    if (i >= n) {
        cout << endl;
    }
    else {
        cout << vettore[i] << " ";
        i++;
        stampaVettore(vettore, n, i);
    }
}