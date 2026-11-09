#include <iostream>
using namespace std;

int main() {
    int choice;
    float temp, convertedTemp;

    cout << "Temperature Conversion Menu:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Celsius to Kelvin\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            convertedTemp = (temp * 9.0 / 5.0) + 32;
            cout << temp << "°C = " << convertedTemp << "°F\n";
            break;
        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            convertedTemp = (temp - 32) * 5.0 / 9.0;
            cout << temp << "°F = " << convertedTemp << "°C\n";
            break;
        case 3:
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            convertedTemp = temp + 273.15;
            cout << temp << "°C = " << convertedTemp << "K\n";
            break;
        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}
