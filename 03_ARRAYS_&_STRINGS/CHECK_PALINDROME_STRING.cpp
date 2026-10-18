#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    if (str == reversedStr) {
        cout << "\"" << str << "\" is a palindrome string." << endl;
    } else {
        cout << "\"" << str << "\" is not a palindrome string." << endl;
    }

    return 0;
}
