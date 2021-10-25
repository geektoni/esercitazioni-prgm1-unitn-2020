#include <iostream>

using namespace std;

void sort(int & n1, int & n2, int & n3);
void swap(int & n1, int & n2);

int main() {

    int n1 = 3, n2 = 7, n3 = 2;

    sort(n1, n2, n3);

    cout << "n1 " << n1 << ", n2 " << n2 << ", n3 " << n3 << endl;
 
    return 0;
}

void sort(int & n1, int & n2, int & n3) {
    if (n1 > n2) {
        swap(n1, n2);
    }
    if (n1 > n3) {
        swap(n1, n3);
    }
    if (n2 > n3) {
        swap(n2, n3);
    }
}

void swap(int & n1, int & n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}