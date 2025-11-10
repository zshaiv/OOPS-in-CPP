//WAP to input two 3 x 3 matrix and find the sum of the both matrix in the third matrix
#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3];

    // Input first matrix
    cout << "Enter elements of the first 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // Input second matrix
    cout << "\nEnter elements of the second 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Add both matrices and store result in sum matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display first matrix
    cout << "\nFirst Matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix1[i][j] << "\t";
        }
        cout << endl;
    }

    // Display second matrix
    cout << "\nSecond Matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix2[i][j] << "\t";
        }
        cout << endl;
    }

    // Display sum matrix
    cout << "\nSum of the two matrices:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
