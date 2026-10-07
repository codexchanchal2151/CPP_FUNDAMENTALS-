#include <iostream>
using namespace std;

class LeapYear {
private:
    int year;

public:
    void getYear() {
        cout << "Enter a year: ";
        cin >> year;
    }

    void checkLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " is a Leap Year." << endl;
        } else {
            cout << year << " is not a Leap Year." << endl;
        }
    }
};

int main() {
    LeapYear ly;
    ly.getYear();
    ly.checkLeapYear();
    return 0;
}
