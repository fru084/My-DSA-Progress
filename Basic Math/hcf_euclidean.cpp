#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    int tnum1 = n1;
    int tnum2 = n2;

    while (tnum2 != 0) {
        int temp = tnum2;
        tnum2 = tnum1 % tnum2;
        tnum1 = temp;
    }

    cout << "The highest common factor is: " << tnum1;

    return 0;
}
