//WAP to input a 3 x 3 matrix and find the sum of the rows
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

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

    // Find and display sum of each row
    cout << "\nSum of each row:\n";
    for(int i = 0; i < 3; i++) {
        int rowSum = 0;
        for(int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Sum of Row " << i + 1 << " = " << rowSum << endl;
    }

    return 0;
}
