#include <iostream>
using namespace std;

class Largest
{
public:
    int a, b;

    void findLargest()
    {
        if (a > b)
            cout << a << " is largest";
        else if (b > a)
            cout << b << " is largest";
        else
            cout << "Both are equal";
    }
};

int main()
{
    Largest obj;

    cout << "Enter two numbers: ";
    cin >> obj.a >> obj.b;

    obj.findLargest();

    return 0;
}
