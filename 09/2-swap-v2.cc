#include <iostream>

using namespace std;

void swapHalf(short * n1, short * n2);

int main() {

    00001000 10001111
             |

    short n1, n2;
    n1 = 1855;
    n2 = 1048;

    cout << "n1 " << n1 << ", n2 " << n2 << endl;

    swapHalf(&n1, &n2);

    cout << "n1 " << n1 << ", n2 " << n2 << endl;

    return 0;
}

void swapHalf(short * n1, short * n2) {

    char * pn1 = (char *) n1;
    char * pn2 = (char *) n2;

    char tempSecondHalfN1 = *(pn1+1*sizeof(char));
    *(pn1+1) = *(pn2+1);
    *(pn2+1) = tempSecondHalfN1;
}