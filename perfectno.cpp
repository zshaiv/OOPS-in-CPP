//WAP to enter 10 numbers and count perfect numbers
#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int count = 0;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "Perfect numbers are: ";
    for (int i = 0; i < 10; i++) {
        int sum = 0;
        for (int j = 1; j < arr[i]; j++) {   // find divisors
            if (arr[i] % j == 0) {
                sum += j;
            }
        }
        if (sum == arr[i]) {  // check if perfect
            cout << arr[i] << " ";
            count++;
        }
    }
    cout << "\nTotal perfect numbers: " << count << endl;
}
