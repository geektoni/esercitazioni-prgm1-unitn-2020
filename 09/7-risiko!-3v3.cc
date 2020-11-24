#include <iostream>
#include <cstdlib>

using namespace std;

void sort(int & n1, int & n2, int & n3);
void swap(int & n1, int & n2);
int tiraDado();
void confronta(int att, int dif);


int main() {

    srand(time(NULL));
    
    int att1 = tiraDado();
    int att2 = tiraDado();
    int att3 = tiraDado();

    int dif1 = tiraDado();
    int dif2 = tiraDado();
    int dif3 = tiraDado();

    sort(att1, att2, att3);
    sort(dif1, dif2, dif3);

    confronta(att3, dif3);
    confronta(att2, dif2);
    confronta(att1, dif1);
}

void sort(int & n1, int & n2, int & n3) {
    if (n1 > n2)
        swap(n1, n2);
    if (n1 > n3)
        swap(n1, n3);
    if (n2 > n3)
        swap(n2, n3);
}

void swap(int & n1, int & n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int tiraDado() {
    return rand() % 6 + 1;
}

void confronta(int att, int dif) {

    cout << "Dado attaccante: " << att << endl;
    cout << "Dado difensore: " << dif << endl;

    if (att > dif) {
        cout << "Ha vinto l'attaccante" << endl;
    }
    else {
        cout << "Ha vinto il difensore" << endl;
    }
}