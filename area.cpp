//WAP if you enter 1. Area of circle 2.circumference of circle 3.area of triangle 4.area of rectangle
#include <iostream>
using namespace std;

int main() {
    int choice;
    float radius, base, height, length, breadth;
    const float PI = 3.1416;

    cout << "Choose an option:\n";
    cout << "1. Area of Circle\n";
    cout << "2. Circumference of Circle\n";
    cout << "3. Area of Triangle\n";
    cout << "4. Area of Rectangle\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter radius of circle: ";
            cin >> radius;
            cout << "Area of Circle = " << PI * radius * radius << endl;
            break;

        case 2:
            cout << "Enter radius of circle: ";
            cin >> radius;
            cout << "Circumference of Circle = " << 2 * PI * radius << endl;
            break;

        case 3:
            cout << "Enter base and height of triangle: ";
            cin >> base >> height;
            cout << "Area of Triangle = " << 0.5 * base * height << endl;
            break;

        case 4:
            cout << "Enter length and breadth of rectangle: ";
            cin >> length >> breadth;
            cout << "Area of Rectangle = " << length * breadth << endl;
            break;

        default:
            cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
    }

    return 0;
}
