#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number: ";
    int num;
    cin >> num;
    int count=0;
    for (int i=2; i*i<num ; i++) {
        if (num % i==0) {
            count++;
        }
    }
    if (count !=0) {
        cout << "The number isn't prime.";
    } else {
        cout << "The number is prime.";
    }

    return 0;
}