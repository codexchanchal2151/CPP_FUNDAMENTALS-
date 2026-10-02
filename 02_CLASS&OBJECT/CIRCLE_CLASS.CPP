#include <iostream>
using namespace std;

class Circle {
public:
    float radius;

    void input() {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void area() {
        cout << "Area of Circle = " << 3.14 * radius * radius;
    }
};

int main() {
    Circle c;

    c.input();
    c.area();

    return 0;
}

