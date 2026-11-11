#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1,n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    vector<int> factors;
    int n3;
    if (n1>=n2) {
        n3=n2;
    } else {
        n3=n1;
    }
    
    for (int i=1; i<=n3 ; i++) {
        if (n1%i==0) {
            if (n2%i==0) {
                factors.push_back(i);
            }
        }
    }

    sort(factors.begin(), factors.end());
    cout << "The highest common factor is: " << factors.back();

    return 0;
}