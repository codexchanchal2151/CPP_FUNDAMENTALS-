#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, breadth;

    void input() {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void perimeter() {
        cout << "Perimeter = " << 2 * (length + breadth);
    }
};

int main() {
    Rectangle r;

    r.input();
    r.perimeter();

    return 0;
}
