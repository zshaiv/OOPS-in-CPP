//WAP to input 3 x 3 matrix and count all the negative and positive numbers
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int positive = 0, negative = 0;

    // Input elements
    cout << "Enter elements of a 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];

            // Count positive and negative numbers
            if(matrix[i][j] > 0)
                positive++;
            else if(matrix[i][j] < 0)
                negative++;
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

    // Display results
    cout << "\nTotal Positive Numbers: " << positive << endl;
    cout << "Total Negative Numbers: " << negative << endl;

    return 0;
}
