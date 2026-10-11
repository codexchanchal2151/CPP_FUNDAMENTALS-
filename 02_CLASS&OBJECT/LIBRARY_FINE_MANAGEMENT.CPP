#include <iostream>
using namespace std;

class Library {
private:
    int daysLate;
    float finePerDay;
    float totalFine;

public:
    void input() {
        cout << "Enter number of days late: ";
        cin >> daysLate;
        cout << "Enter fine per day (in Rs): ";
        cin >> finePerDay;
    }

    void calculateFine() {
        if (daysLate <= 5) {
            totalFine = daysLate * finePerDay;
        } else if (daysLate <= 10) {
            totalFine = (5 * finePerDay) + ((daysLate - 5) * (finePerDay + 2));
        } else {
            totalFine = (5 * finePerDay) + (5 * (finePerDay + 2)) + ((daysLate - 10) * (finePerDay + 5));
        }
    }

    void display() {
        cout << "--- Library Fine Details ---" << endl;
        cout << "Days Late: " << daysLate << endl;
        cout << "Total Fine to Pay: Rs. " << totalFine << endl;
    }
};

int main() {
    Library lib;
    lib.input();
    lib.calculateFine();
    lib.display();
    return 0;
}
