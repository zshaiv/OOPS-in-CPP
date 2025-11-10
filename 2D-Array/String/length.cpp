//WAP to calculate length of the string
#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);  // reads the entire line including spaces

    // Calculate length manually
    for(int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    cout << "Length of the string is: " << length << endl;

    return 0;
}
