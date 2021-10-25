#include <iostream>
#include <climits>

using namespace std;

int max(int n1, int n2);
int massimoFra5(int n1, int n2 = INT_MIN, int n3 = INT_MIN, int n4 = INT_MIN, int n5 = INT_MIN);

int main() {

    cout << massimoFra5(-3, -4) << endl;
    cout << massimoFra5(2,3,4,5,6) << endl;
    cout << massimoFra5(-45,65,67,0) << endl;
    return 0;
}

int massimoFra5(int n1, int n2, int n3, int n4, int n5) {
    int maxValue;
    maxValue = max(n1, n2);
    maxValue = max(maxValue, n3);
    maxValue = max(maxValue, n4);
    maxValue = max(maxValue, n5);
    return maxValue;
}

int max(int n1, int n2) {
  if (n1 >= n2) {
    return n1;
  } else {
    return n2;
  }
}
