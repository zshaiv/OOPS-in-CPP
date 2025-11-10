//WAP to input two 3 x 3 matrix and find the sum of the both matrix in the third matrix
#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], C[3][3];

    // Input first matrix
    cout << "Enter elements of the first 3x3 matrix (A):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter element A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "\nEnter elements of the second 3x3 matrix (B):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter element B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    // Initialize result matrix to zero
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display first matrix
    cout << "\nMatrix A:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    // Display second matrix
    cout << "\nMatrix B:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    // Display result matrix
    cout << "\nResultant Matrix after Multiplication (A × B):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
