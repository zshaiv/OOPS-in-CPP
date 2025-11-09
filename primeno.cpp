//WAP to enter 10 numbers and count the prime numbers
#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int count = 0;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "Prime numbers are: ";
    for (int i = 0; i < 10; i++) {
        int num = arr[i];
        bool isPrime = true;
        if (num <= 1) {
            isPrime = false; // 0 and 1 are not prime
        } else {
            for (int j = 2; j * j <= num; j++) { // check divisibility up to √num
                if (num % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            cout << num << " ";
            count++;
        }
    }
    cout << "\nTotal prime numbers: " << count << endl;
}
