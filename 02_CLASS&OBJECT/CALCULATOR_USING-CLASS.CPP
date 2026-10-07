#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    void getNumbers() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    void displayResults() {
        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;
        if (num2 != 0)
            cout << "Division: " << num1 / num2 << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    }
};

int main() {
    Calculator calc;
    calc.getNumbers();
    calc.displayResults();
    return 0;
}
