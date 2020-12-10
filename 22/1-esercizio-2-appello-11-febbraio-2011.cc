#include <iostream>
#include <cstdlib>

using namespace std;

void inizializzaArray(int array[], int dim);
void stampaArray(int array[], int dim);
bool patternMatching(int pattern[], int patternDim, int testo[], int testoDim);

int main() {

    int patternDim = 1;
    int testoDim = 20;

    int pattern[patternDim];
    int testo[testoDim];

    srand(time(NULL));

    inizializzaArray(pattern, patternDim);
    inizializzaArray(testo, testoDim);

    stampaArray(pattern, patternDim);
    stampaArray(testo, testoDim);


    if (patternMatching(pattern, patternDim, testo, testoDim)) {
        cout << "Il pattern è contenuto nel testo" << endl;
    }
    else {
        cout << "Il pattern NON è contenuto nel testo" << endl;
    }

    return 0;
}

void inizializzaArray(int array[], int dim) {
    for (int i = 0 ; i < dim ; i++) {
        array[i] = rand() % 10;
    }
}

void stampaArray(int array[], int dim) {
    for (int i = 0 ; i < dim ; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

bool patternMatching(int pattern[], int patternDim, int testo[], int testoDim) {

    bool match = false;

    for (int indiceTesto = 0 ; indiceTesto < (testoDim-patternDim) && !match ; indiceTesto++) {
        for (int indicePattern = 0; indicePattern < patternDim && 
            testo[indiceTesto+indicePattern] == pattern[indicePattern] ; 
            indicePattern++) {
            if (indicePattern == patternDim - 1) {
                match = true;
            }
        }
    }

    return match;
}









