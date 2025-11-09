//WAP to enter 10 numbers and count palindrome nummbers
#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int count = 0;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "Palindrome numbers are: ";
    for (int i = 0; i < 10; i++) {
        int num = arr[i];
        int reversed = 0, original = num;
        while (num > 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        if (reversed == original) {
            cout << original << " ";
            count++;
        }
    }
    cout << "\nTotal palindrome numbers: " << count << endl;
}
