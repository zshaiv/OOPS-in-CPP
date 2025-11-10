//WAP to input a 3 x 3 matrix and sort in ascending order
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int temp;
    
    // Input matrix elements
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

    // Sort all elements in ascending order
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                for(int l = 0; l < 3; l++) {
                    if(matrix[i][j] < matrix[k][l]) {
                        temp = matrix[i][j];
                        matrix[i][j] = matrix[k][l];
                        matrix[k][l] = temp;
                    }
                }
            }
        }
    }

    // Display sorted matrix
    cout << "\nMatrix after sorting in ascending order:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
