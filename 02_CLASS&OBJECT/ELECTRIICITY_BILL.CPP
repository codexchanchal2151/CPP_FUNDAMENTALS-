#include <iostream>
#include <string>
using namespace std;

class ElectricityBill {
private:
    string consumerName;
    int units;
    float billAmount;

public:
    void inputDetails() {
        cout << "Enter Consumer Name: ";
        cin >> consumerName;
        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    void calculateBill() {
        if (units <= 100) {
            billAmount = units * 1.50;
        } else if (units <= 300) {
            billAmount = (100 * 1.50) + ((units - 100) * 2.50);
        } else {
            billAmount = (100 * 1.50) + (200 * 2.50) + ((units - 300) * 4.00);
        }
    }

    void displayBill() {
        cout << "\n--- Electricity Bill Statement ---" << endl;
        cout << "Consumer Name: " << consumerName << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill Amount: Rs. " << billAmount << endl;
    }
};

int main() {
    ElectricityBill eb;
    eb.inputDetails();
    eb.calculateBill();
    eb.displayBill();
    return 0;
}
