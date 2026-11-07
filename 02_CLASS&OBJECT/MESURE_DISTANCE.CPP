#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;
public:
    void getData() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    
    void addDistance(Distance d1, Distance d2) {
        inches = d1.inches + d2.inches;
        feet = d1.feet + d2.feet + (inches / 12);
        inches %= 12;
    }
    
    void display() {
        cout << "Total Distance: " << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance dist1, dist2, dist3;
    cout << "Enter first distance:\n";
    dist1.getData();
    cout << "Enter second distance:\n";
    dist2.getData();
    
    dist3.addDistance(dist1, dist2);
    dist3.display();
    return 0;
}
