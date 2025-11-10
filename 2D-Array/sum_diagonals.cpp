//WAP to input a 3 x 3 matrix and find the sum of the diagonals
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int mainDiagonalSum = 0, secondaryDiagonalSum = 0;

    // Input matrix elements
    cout << "Enter elements of a 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Display matrix
    cout << "\nThe 3x3 matrix is:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Calculate diagonal sums
    for(int i = 0; i < 3; i++) {
        mainDiagonalSum += matrix[i][i];             // left-to-right diagonal
        secondaryDiagonalSum += matrix[i][2 - i];    // right-to-left diagonal
    }

    // Display results
    cout << "\nSum of Main Diagonal = " << mainDiagonalSum << endl;
    cout << "Sum of Secondary Diagonal = " << secondaryDiagonalSum << endl;

    return 0;
}
