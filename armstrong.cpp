#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Enter the number to be checked: ";
    int num;
    cin >> num;
    int tnum1=num;
    int tnum2=num;
    int numd=0;
    int arm=0;
    int digit=0;
    while (num>0) {
        num = num/10;
        numd+=1;
    }
    while (tnum1>0) {
        digit = tnum1 % 10;
        tnum1 = tnum1/10;
        arm += pow (digit,numd);
    }

    if (arm==tnum2) {
        cout << "This is an armstrong number.";
    } else {
        cout << "This isn't an armstrong number.";
    }

    return 0;
}