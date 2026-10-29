#include <iostream>
using namespace std;

// Basic math functions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2, choice;

    // Function pointer declaration: points to a function taking two ints and returning int
    int (*operation)(int, int) = nullptr;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "\nChoose an operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "Enter choice (1-3): ";
    cin >> choice;

    // Assigning function address to the pointer
    switch (choice) {
        case 1:
            operation = add;
            break;
        case 2:
            operation = subtract;
            break;
        case 3:
            operation = multiply;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    // Calling the function using the pointer
    int result = operation(num1, num2);
    cout << "Result: " << result << endl;

    return 0;
}
