#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Enter the number of elements in the array: ";
    int size;
    cin >> size;
    vector<int> Array(size);
    cout << "Enter the elements: ";
    for (int i=0; i<size; i++) {
        cin >> Array[i];
    }
    cout << "The original array is: ";
    for (int i=0; i<size; i++) {
        cout << Array[i] << " ";
    }
    int temp;
    for (int j=size; j>1; j--) {
        bool swapped = false;
        for (int i=0; i<j-1 ; i++) {
            if (Array[i]>Array[i+1]) {
                temp= Array[i];
                Array[i]= Array[i+1];
                Array[i+1]= temp;
                swapped = true;
                }
            }

        if (!swapped) {
            break;
        }
    }

    cout << "\nThe sorted array is: ";
    for (int i=0; i<size; i++) {
        cout << Array[i] << " ";
    }
    
    return 0;
}