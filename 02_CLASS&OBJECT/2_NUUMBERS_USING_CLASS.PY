#include <iostream>
using namespace std;

class Addition
{
public:
    int a, b;

    void add()
    {
        cout << "Sum = " << a + b;
    }
};

int main()
{
    Addition obj;

    cout << "Enter two numbers: ";
    cin >> obj.a >> obj.b;

    obj.add();

    return 0;
}
