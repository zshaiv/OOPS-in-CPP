//WAP to input 10 numbers and display positive,negative and zero 
#include <iostream>
using namespace std;
int main() {
    int num;
    int positive = 0, negative = 0, zero = 0;
    cout << "Enter 10 numbers: ";

    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }
    cout << "\nCount of Positive numbers: " << positive;
    cout << "\nCount of Negative numbers: " << negative;
    cout << "\nCount of Zeros: " << zero;
}
