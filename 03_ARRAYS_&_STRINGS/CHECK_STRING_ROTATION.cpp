#include <iostream>
#include <string>
using namespace std;

bool isRotation(string str1, string str2) {
    if (str1.length() != str2.length())
        return false;
    
    string temp = str1 + str1;
    return (temp.find(str2) != string::npos);
}

int main() {
    string str1 = "ABCD";
    string str2 = "CDAB";

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;

    if (isRotation(str1, str2))
        cout << "Result: String 2 is a rotated version of String 1!" << endl;
    else
        cout << "Result: String 2 is NOT a rotated version of String 1." << endl;

    return 0;
}
