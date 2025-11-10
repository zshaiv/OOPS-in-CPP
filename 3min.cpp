//WAP to input 3 numbers and display the minimum
#include <iostream>
using namespace std;
int main(){
int num, min;
    cout << "Enter 3 numbers: ";
    cin >> min;
    for (int i = 1; i < 3; i++) {
        cin >> num;
        if (num < min)
            min = num;
    }
    cout << "The minimum number is: " << min;
    return 0;
}