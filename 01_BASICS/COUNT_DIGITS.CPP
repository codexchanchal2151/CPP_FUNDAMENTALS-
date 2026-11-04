#include <iostream>
using namespace std;

int main() {
    long long n;
    int count = 0;

    cout << "Enter an integer: ";
    cin >> n;

    if (n == 0) {
        count = 1;
    } else {
        long long temp = (n < 0) ? -n : n;
        while (temp != 0) {
            temp /= 10;
            count++;
        }
    }

    cout << "Total number of digits: " << count << endl;
    return 0;
}
