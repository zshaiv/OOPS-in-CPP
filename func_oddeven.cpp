//WAP to create a function to check if the number is even or odd
#include <iostream>
using namespace std;

// Function declaration
void checkEvenOdd(int num) {
    if(num % 2 == 0)
        cout << num << " is Even." << endl;
    else
        cout << num << " is Odd." << endl;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Function call
    checkEvenOdd(number);

    return 0;
}
