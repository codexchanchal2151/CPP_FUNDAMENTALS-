#include <iostream>
using namespace std;

int main() {
    double base, result = 1.0;
    int exponent;

    cout << "Enter base number: ";
    cin >> base;
    cout << "Enter exponent (integer): ";
    cin >> exponent;

    int exp = exponent;
    if (exponent < 0) {
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    if (exp < 0) {
        result = 1.0 / result;
    }

    cout << base << "^" << exp << " = " << result << endl;

    return 0;
}
