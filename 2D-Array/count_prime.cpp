//WAP to input a 3 x 3 matrix and count all the prime numbers
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int matrix[3][3];
    int primeCount = 0;

    // Input matrix elements
    cout << "Enter elements of a 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];

            // Count if element is prime
            if (isPrime(matrix[i][j]))
                primeCount++;
        }
    }

    // Display matrix
    cout << "\nThe 3x3 matrix is:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Display total prime numbers
    cout << "\nTotal Prime Numbers in the matrix: " << primeCount << endl;

    return 0;
}
