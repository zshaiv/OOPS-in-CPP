//WAP to input a 3 x 3 matrix find the sum and dsiplay
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int sum = 0;

    // Input elements
    cout << "Enter elements of a 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
            sum += matrix[i][j]; // Add to sum while entering
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

    // Display sum
    cout << "\nSum of all elements = " << sum << endl;

    return 0;
}
