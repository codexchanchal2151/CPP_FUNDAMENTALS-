#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    while(num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}
