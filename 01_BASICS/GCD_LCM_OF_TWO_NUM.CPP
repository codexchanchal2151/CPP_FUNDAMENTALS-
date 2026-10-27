#include <iostream>
using namespace std;

int main() {
    int num1, num2, a, b, temp, gcd, lcm;

    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    a = num1;
    b = num2;

    // Euclidean algorithm to find GCD
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // LCM formula: (num1 * num2) / GCD
    lcm = (num1 * num2) / gcd;

    cout << "GCD (HCF): " << gcd << endl;
    cout << "LCM: " << lcm << endl;

    return 0;
}
