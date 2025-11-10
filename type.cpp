//WAP to input 10 number from user and print which is a)Palindrome b)Armstrong c)Prime
#include <iostream>
#include <cmath>
using namespace std;

// Function to check palindrome
bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}
// Function to check Armstrong number
bool isArmstrong(int n) {
    int original = n, sum = 0;
    int digits = 0, temp = n;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}
// Function to check prime number
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int arr[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "\nPalindrome numbers are: ";
    for (int i = 0; i < 10; i++) {
        if (isPalindrome(arr[i]))
            cout << arr[i] << " ";
    }
    cout << "\nArmstrong numbers are: ";
    for (int i = 0; i < 10; i++) {
        if (isArmstrong(arr[i]))
            cout << arr[i] << " ";
    }
    cout << "\nPrime numbers are: ";
    for (int i = 0; i < 10; i++) {
        if (isPrime(arr[i]))
            cout << arr[i] << " ";
    }
}
