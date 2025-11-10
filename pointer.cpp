//WAP using the pointer with all type of operators
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr; // pointer declaration
    ptr = arr; // pointer initialization

    cout << "Array elements using pointer arithmetic:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Element " << i+1 << ": " << *(ptr + i) << endl;
    }

    cout << "\nPointer operator demonstration:\n";

    cout << "Address of first element (&arr[0]): " << &arr[0] << endl;
    cout << "Pointer value (ptr): " << ptr << endl;
    cout << "Dereferenced value (*ptr): " << *ptr << endl;

    // Pointer increment
    ptr++;
    cout << "\nAfter ptr++:\n";
    cout << "Pointer value (ptr): " << ptr << endl;
    cout << "Dereferenced value (*ptr): " << *ptr << endl;

    // Pointer decrement
    ptr--;
    cout << "\nAfter ptr--:\n";
    cout << "Pointer value (ptr): " << ptr << endl;
    cout << "Dereferenced value (*ptr): " << *ptr << endl;

    // Pointer arithmetic with + and -
    cout << "\nUsing pointer + 2: " << *(ptr + 2) << endl;
    cout << "Using pointer - (-1 not valid): " << *(ptr + 1) << endl;

    // Comparison
    int *ptr1 = &arr[1];
    int *ptr2 = &arr[3];
    cout << "\nPointer Comparison:\n";
    if(ptr1 < ptr2)
        cout << "ptr1 points to an earlier element than ptr2\n";
    if(ptr1 != ptr2)
        cout << "ptr1 and ptr2 point to different locations\n";

    return 0;
}
