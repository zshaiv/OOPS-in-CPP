//WAP to enter 10 numbers and count armstrong numbers
#include <iostream>
#include <cmath>    // for pow()
using namespace std;
int main() {
    int arr[10];
    int count = 0;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "Armstrong numbers are: ";
    for (int i = 0; i < 10; i++) {
        int num = arr[i];
        int original = num;
        int digits = 0, sum = 0;
        int temp = num;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        // Calculate sum of cubes (or powers) of digits
        temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);  // Raise each digit to the power of total digits
            temp /= 10;
        }
        if (sum == original) {
            cout << original << " ";
            count++;
        }
    }
    cout << "\nTotal Armstrong numbers: " << count << endl;
}
