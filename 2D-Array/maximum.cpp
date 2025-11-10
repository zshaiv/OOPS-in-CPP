//WAP to input 3 x 3 matrix and find the maximum number 
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int maxNum;

    // Input matrix elements
    cout << "Enter elements of a 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];

            // Initialize maxNum for the first element
            if(i == 0 && j == 0)
                maxNum = matrix[i][j];
            else if(matrix[i][j] > maxNum)
                maxNum = matrix[i][j];
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

    // Display maximum number
    cout << "\nThe maximum number in the matrix is: " << maxNum << endl;

    return 0;
}
