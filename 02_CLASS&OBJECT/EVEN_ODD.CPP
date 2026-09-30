#include <iostream>
using namespace std;

class Number
{
public:
    int n;

    void check()
    {
        if (n % 2 == 0)
            cout << "Even Number";
        else
            cout << "Odd Number";
    }
};

int main()
{
    Number obj;

    cout << "Enter a number: ";
    cin >> obj.n;

    obj.check();

    return 0;
}
