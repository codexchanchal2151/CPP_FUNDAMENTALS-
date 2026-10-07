#include <iostream>
using namespace std;

class Temperature {
private:
    float temp;

public:
    void convertTemperature() {
        int choice;
        cout << "Choose Conversion:\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter choice (1 or 2): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            float fahrenheit = (temp * 9.0 / 5.0) + 32;
            cout << temp << " °C = " << fahrenheit << " °F" << endl;
        } else if (choice == 2) {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            float celsius = (temp - 32) * 5.0 / 9.0;
            cout << temp << " °F = " << celsius << " °C" << endl;
        } else {
            cout << "Invalid choice!" << endl;
        }
    }
};

int main() {
    Temperature t;
    t.convertTemperature();
    return 0;
}
