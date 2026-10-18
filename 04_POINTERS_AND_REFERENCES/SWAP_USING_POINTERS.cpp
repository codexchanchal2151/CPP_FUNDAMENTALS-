#include <iostream>
using namespace std;

// Function using pointers
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function using references
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\nOriginal values: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swapping using pointers
    swapByPointer(&num1, &num2);
    cout << "After swapByPointer: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swapping back using references
    swapByReference(num1, num2);
    cout << "After swapByReference: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
