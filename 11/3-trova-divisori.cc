#include <iostream>
#include <cmath>

using namespace std;

void trovaDivisori(int n);

int main() {

    int n;
    cout << "Inserisci un numero: ";
    cin >> n;

    trovaDivisori(n);

    return 0;
}

void trovaDivisori(int n) {

    bool trovatoDivisore = false;

    for (int i = 2; (i <= sqrt(n) && !trovatoDivisore) ; i++) {
        if (n % i == 0) {
            cout << i << " ";
            trovaDivisori(n / i);
            trovatoDivisore = true;
        }
    }

    if (!trovatoDivisore) {
        cout << n << " ";
    }

}
