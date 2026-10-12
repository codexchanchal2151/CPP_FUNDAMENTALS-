#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    // Converting to lowercase for easier handling
    ch = tolower(ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ch << " is a Vowel." << endl;
            break;
        default:
            if ((ch >= 'a' && ch <= 'z'))
                cout << ch << " is a Consonant." << endl;
            else
                cout << "Invalid input! Not an alphabet." << endl;
    }
    return 0;
}
