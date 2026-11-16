#include <iostream>
using namespace std;


int findSmallest(int Array[], int size, int j) {
    int Smallest = Array[j];
    int s = j;
    for (int i = j; i < size; i++) {
        if (Array[i] < Smallest) {
            Smallest = Array[i];
            s = i;
        }
    }
    return s;
}
int main() {
    cout << "Enter the number of elements in the array: ";
    int size;
    cin >> size;
    int Array[size];
    cout << "Enter the elements: ";
    for (int i=0; i<size; i++) {
        cin >> Array[i];
    }
    cout << "The array is: ";
    for (int i=0; i<size; i++) {
        cout << Array[i] << " ";
    }
    int Smallest= Array[0];
    int s,j;
    int flag=0;
    int temp;
    for (j=0; j<size; j++) {
        for (int i = 0; i < size - 1; i++) {
            if (Array[i] > Array[i+1]) {
                flag++;
            }
        }  
        if (flag==0) {
        break;
        } else {
            s = findSmallest(Array, size, j);
            temp= Array[j];
            Array[j]= Array[s];
            Array[s]= temp;
        }
    }

    cout << "The sorted array is: ";
    for (int i=0; i<size; i++) {
        cout << Array[i] << " ";
    }

    return 0;
}