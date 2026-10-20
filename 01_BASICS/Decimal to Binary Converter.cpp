#include <iostream>
using namespace std;

int main() {
    int num;
    long long binary = 0;
    int rem, place = 1;

    cout << "Enter a decimal number: ";
    cin >> num;

    int temp = num;
    while (temp > 0) {
        rem = temp % 2;
        binary += rem * place;
        temp /= 2;
        place *= 10;
    }

    cout << "Binary of " << num << " is: " << binary << endl;

    return 0;
}
