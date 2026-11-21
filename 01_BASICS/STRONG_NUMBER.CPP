#include <iostream>
using namespace std;

long long factorial(int digit) {
    long long fact = 1;
    for (int i = 2; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a non-negative number.\n";
        return 0;
    }

    int temp = num;
    long long sum = 0;

    if (temp == 0) {
        sum = factorial(0); // 0! = 1
    } else {
        while (temp > 0) {
            int digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }
    }

    if (sum == num) {
        cout << num << " is a Strong Number.\n";
    } else {
        cout << num << " is not a Strong Number.\n";
    }

    return 0;
}
