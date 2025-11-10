//WAP to input 10 numbers and find factorial of each
#include <iostream>
using namespace std;
int main() {
    int arr[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "\nFactorials of the numbers are:\n";

    // Calculate factorial for each number
    for (int i = 0; i < 10; i++) {
        int n = arr[i];
        long long fact = 1;
        if (n < 0) {
            cout << "Factorial not defined for negative number: " << n << endl;
            continue;
        }
        for (int j = 1; j <= n; j++) {
            fact *= j;
        }
        cout << "Factorial of " << n << " = " << fact << endl;
    }
}
