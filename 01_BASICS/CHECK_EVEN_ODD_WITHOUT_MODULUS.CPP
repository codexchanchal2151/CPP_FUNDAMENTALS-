#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Using bitwise AND operator (&) instead of modulus (%)
    if (num & 1) {
        cout << num << " is Odd." << endl;
    } else {
        cout << num << " is Even." << endl;
    }

    return 0;
}
