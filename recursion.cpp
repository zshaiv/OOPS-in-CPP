//WAP to create function using recursion i)Fibonacci series ii)Armstrong number iii)Palindrome number iv)Prime number v)Calculate Power vi)Factorial Number vii)Maximum Number
#include <iostream>
#include <cmath>
using namespace std;

// Fibonacci series
int fibonacci(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

// Armstrong number
int power(int x, int y) { // helper function for Armstrong
    if (y == 0) return 1;
    return x * power(x, y - 1);
}

int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

int armstrongSum(int n, int digits) {
    if (n == 0) return 0;
    int digit = n % 10;
    return power(digit, digits) + armstrongSum(n / 10, digits);
}

bool isArmstrong(int n) {
    int digits = countDigits(n);
    return n == armstrongSum(n, digits);
}

// Palindrome number
int reverseNumber(int n, int rev = 0) {
    if (n == 0) return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

bool isPalindrome(int n) {
    return n == reverseNumber(n);
}

//  Prime number
bool isPrime(int n, int i = 2) {
    if (n <= 2)
        return (n == 2);
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return isPrime(n, i + 1);
}

// Calculate Power
int calcPower(int base, int exp) {
    if (exp == 0) return 1;
    return base * calcPower(base, exp - 1);
}

//  Factorial Number
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Maximum Number in Array
int findMax(int arr[], int n) {
    if (n == 1) return arr[0];
    int maxRest = findMax(arr, n - 1);
    return (arr[n - 1] > maxRest) ? arr[n - 1] : maxRest;
}

// Main Function
int main() {
    int choice;
    cout << "Choose an option:\n";
    cout << "1. Fibonacci Series\n";
    cout << "2. Armstrong Number\n";
    cout << "3. Palindrome Number\n";
    cout << "4. Prime Number\n";
    cout << "5. Power Calculation\n";
    cout << "6. Factorial Number\n";
    cout << "7. Maximum Number in Array\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            int n;
            cout << "Enter number of terms: ";
            cin >> n;
            cout << "Fibonacci Series: ";
            for(int i = 0; i < n; i++)
                cout << fibonacci(i) << " ";
            cout << endl;
            break;
        }
        case 2: {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            if(isArmstrong(num))
                cout << num << " is an Armstrong number.\n";
            else
                cout << num << " is not an Armstrong number.\n";
            break;
        }
        case 3: {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            if(isPalindrome(num))
                cout << num << " is a Palindrome number.\n";
            else
                cout << num << " is not a Palindrome number.\n";
            break;
        }
        case 4: {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            if(isPrime(num))
                cout << num << " is a Prime number.\n";
            else
                cout << num << " is not a Prime number.\n";
            break;
        }
        case 5: {
            int base, exp;
            cout << "Enter base and exponent: ";
            cin >> base >> exp;
            cout << base << "^" << exp << " = " << calcPower(base, exp) << endl;
            break;
        }
        case 6: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            cout << "Factorial of " << n << " = " << factorial(n) << endl;
            break;
        }
        case 7: {
            int n;
            cout << "Enter size of array: ";
            cin >> n;
            int arr[n];
            cout << "Enter " << n << " elements: ";
            for(int i = 0; i < n; i++)
                cin >> arr[i];
            cout << "Maximum element = " << findMax(arr, n) << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
