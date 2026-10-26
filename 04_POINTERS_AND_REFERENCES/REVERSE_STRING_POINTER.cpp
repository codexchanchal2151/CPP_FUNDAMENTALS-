#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char* str) {
    char* start = str;
    char* end = str + strlen(str) - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char text[100];
    cout << "Enter a string: ";
    cin.getline(text, 100);

    reverseString(text);

    cout << "Reversed string: " << text << endl;
    return 0;
}
