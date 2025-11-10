//WAP to input 10 numbers and find the minimum number
#include <iostream>
using namespace std;
int main() {
    int num, min;
    cout << "Enter 10 numbers: ";
    cin >> min;
    for (int i = 1; i < 10; i++) {
        cin >> num;
        if (num < min)
            min = num;
    }
    cout << "The minimum number is: " << min;
    return 0;
}
