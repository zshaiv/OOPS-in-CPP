//WAP to build a calculator using switch
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero not allowed." << endl;
            break;
        case '%':
            // Modulus works only with integers
            if((int)num2 != 0)
                cout << "Result: " << (int)num1 % (int)num2 << endl;
            else
                cout << "Error! Division by zero not allowed." << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
