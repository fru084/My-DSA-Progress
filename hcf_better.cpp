#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    int n3;
    if (n1>=n2) {
        n3=n2;
    } else {
        n3=n1;
    }

    for (int i = n3; i >= 1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            cout << "The highest common factor is: " << i;
            break;
        }
    }
    return 0;
}