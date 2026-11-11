#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    cout << "Enter the number: ";
    int num;
    cin >> num;
    vector<int> div;
    cout << "The divisors are: \n";
    for (int i=1; i<=sqrt(num); i++) {
        if (num % i == 0) {
            div.push_back(i);
            if (i != num/i) {
                div.push_back(num/i);
            }
        }
    }
    sort(div.begin(), div.end());
    for (auto it:div) {
        cout << it << " ";
    }
    return 0;
}