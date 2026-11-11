#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number: ";
    int num;
    cin >> num;
    int tnum= num;
    int digit;
    int numd=0;
    int revnum=0;
    while (num>0) {
        digit = num % 10;
        num = num/10;
        numd+=1;
        revnum = (revnum * 10) + digit;
    }
    cout << "Number of digits is: " << numd;
    cout << "\nThe reversed number is: " << revnum;

    if (tnum==revnum) {
        cout << "\nThe number " << tnum << " is a palindrome.";
    } else {
        cout << "\nThe number " << tnum << " isn't a palindrome.";
    }
    return 0;
}