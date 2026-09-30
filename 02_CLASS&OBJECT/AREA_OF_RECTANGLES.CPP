#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, breadth;

    void area()
    {
        cout << "Area = " << length * breadth;
    }
};

int main()
{
    Rectangle r;

    cout << "Enter length: ";
    cin >> r.length;

    cout << "Enter breadth: ";
    cin >> r.breadth;

    r.area();

    return 0;
}
