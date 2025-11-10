//WAP to input two 3 x 3 matrix and interchange their value 
#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], temp;

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

    // Interchange matrix elements
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            temp = A[i][j];
            A[i][j] = B[i][j];
            B[i][j] = temp;
        }
    }

    // Display matrices after interchange
    cout << "\nAfter interchanging values:\n";

    cout << "\nMatrix A (after interchange):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatrix B (after interchange):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
