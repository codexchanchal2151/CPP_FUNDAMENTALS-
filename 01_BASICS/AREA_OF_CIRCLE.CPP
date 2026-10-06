#include <iostream>
using namespace std;

int main() {
    double radius, area;
    const double PI = 3.141592653589793;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    if (radius < 0) {
        cout << "Radius cannot be negative." << endl;
    } else {
        area = PI * radius * radius;
        cout << "Area of the circle = " << area << endl;
    }
    
    return 0;
}
