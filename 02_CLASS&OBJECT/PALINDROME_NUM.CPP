#include <iostream>
using namespace std;

class PalindromeChecker {
private:
    int n, originalNum, reversedNum = 0, remainder;

public:
    void inputData() {
        cout << "Enter an integer: ";
        cin >> n;
        originalNum = n;
    }

    void checkPalindrome() {
        while (n > 0) {
            remainder = n % 10;
            reversedNum = reversedNum * 10 + remainder;
            n /= 10;
        }

        if (originalNum == reversedNum)
            cout << originalNum << " is a palindrome number." << endl;
        else
            cout << originalNum << " is not a palindrome number." << endl;
    }
};

int main() {
    PalindromeChecker pc;
    pc.inputData();
    pc.checkPalindrome();
    return 0;
}
