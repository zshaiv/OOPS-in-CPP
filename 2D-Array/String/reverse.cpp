//WAP to input a string and reverse it and display it
#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);  // Reads full line (including spaces)

    // Find length of string
    while (str[length] != '\0') {
        length++;
    }

    // Display reversed string
    cout << "Reversed string: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }

    cout << endl;
    return 0;
}
