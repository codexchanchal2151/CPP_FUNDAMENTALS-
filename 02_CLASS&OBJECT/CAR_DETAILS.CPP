#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    void input() {
        cout << "Enter car brand: ";
        cin >> brand;

        cout << "Enter manufacturing year: ";
        cin >> year;
    }

    void display() {
        cout << "\nCar Brand: " << brand;
        cout << "\nManufacturing Year: " << year;
    }
};

int main() {
    Car c;

    c.input();
    c.display();

    return 0;
}
