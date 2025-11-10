//WAP to input 4 numbers and find the maximum
#include <iostream>
using namespace std;
int main(){
    int num, max;
    cout << "Enter 4 numbers: ";
    cin >> max;
    for (int i = 1; i < 4; i++) {
        cin >> num;
        if (num > max)
            max = num;
    }
    cout << "The maximum number is: " << max;
    return 0;
}