//WAP to input a 3 x 3 matrix and finds its transpose
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], transpose[3][3];

    // Input elements of matrix
    cout << "Enter elements of a 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Display original matrix
    cout << "\nOriginal Matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Calculate transpose
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display transpose matrix
    cout << "\nTranspose of the Matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
