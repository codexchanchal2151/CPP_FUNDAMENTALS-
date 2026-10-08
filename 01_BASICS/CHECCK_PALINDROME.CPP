#include <iostream>
using namespace std;

int main() {
    int n, num, digit, reversedNum = 0;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    num = n;
    
    while (n != 0) {
        digit = n % 10;
        reversedNum = (reversedNum * 10) + digit;
        n /= 10;
    }
    
    if (num == reversedNum)
        cout << num << " is a palindrome number." << endl;
    else
        cout << num << " is not a palindrome number." << endl;
        
    return 0;
}
