#include <iostream>

using namespace std;

void swapHalf(short * n1, short * n2);

int main() {

    short n1, n2;
    n1 = 1855;
    n2 = 1048;

    cout << "n1 " << n1 << ", n2 " << n2 << endl;

    swapHalf(&n1, &n2);

    cout << "n1 " << n1 << ", n2 " << n2 << endl;

    return 0;
}

void swapHalf(short * n1, short * n2) {

    // n1 = 0000011100111111
    //      ^        ^
    //      |        |
    //     ptr1    ptr1+1

    // Char occupa 1 byte, mentre short occupa 2 byte. Se creiamo un puntatore
    // ad uno short converito in char, il puntatore si porrò all'inizio del mio
    // short, però avrà dimensione dimezzata.
    // Perciò, facendo pn1+1, io vado a posizionarmi a metà del valore short
    // originario. Inoltre, facendo l'assegnamento *(pn1+1) = *(pn2+1); vado a
    // sovrascrivere metà dello short originario con la metà dell'altro short.
    // Vedere schema superiore:

    char * pn1 = (char *) n1;
    char * pn2 = (char *) n2;

    char tempSecondHalfN1 = *(pn1+1*sizeof(char));
    *(pn1+1) = *(pn2+1);
    *(pn2+1) = tempSecondHalfN1;
}
