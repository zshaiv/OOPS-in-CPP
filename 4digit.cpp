//WAP to input a number from user and check if its 4 digit or not and and sum of all the digits should be even
#include <iostream>
using namespace std;

int main() {
    int num, temp, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is 4-digit
    if(num >= 1000 && num <= 9999) {
        temp = num;
        
        // Find sum of digits
        while(temp > 0) {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }

        cout << "The sum of digits is: " << sum << endl;

        // Check if sum of digits is even
        if(sum % 2 == 0)
            cout << "Sum of digits is even." << endl;
        else
            cout << "Sum of digits is odd." << endl;
    }
    else {
        cout << "The number is not a 4-digit number." << endl;
    }

    return 0;
}
