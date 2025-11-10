//WAP to input 10 numbers and find the maximum number
#include <iostream>
using namespace std;
int main() {
    int num, max;
    cout << "Enter 10 numbers: ";
    cin >> max;
    for (int i = 1; i < 10; i++) {
        cin >> num;
        if (num > max)
            max = num;
    }
    cout << "The maximum number is: " << max;
    return 0;
}
