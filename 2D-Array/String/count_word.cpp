//WAP to input a string and count the words
#include <iostream>
using namespace std;

int main() {
    char str[200];
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 200);  // Read a full line (including spaces)

    // Count characters (excluding null terminator)
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    cout << "Total number of characters: " << count << endl;

    return 0;
}
