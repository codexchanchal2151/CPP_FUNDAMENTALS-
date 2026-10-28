#include <iostream>
#include <cmath>
using namespace std;

class ArmstrongChecker {
private:
    int number;

    int countDigits(int n) {
        int count = 0;
        while (n != 0) {
            count++;
            n /= 10;
        }
        return count;
    }

public:
    void setNumber(int n) {
        number = n;
    }

    bool isArmstrong() {
        int temp = number;
        int digits = countDigits(number);
        int sum = 0;

        while (temp != 0) {
            int rem = temp % 10;
            sum += round(pow(rem, digits));
            temp /= 10;
        }

        return sum == number;
    }
};

int main() {
    ArmstrongChecker checker;
    int num;

    cout << "Enter a number to check: ";
    cin >> num;

    checker.setNumber(num);

    if (checker.isArmstrong()) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
