#include <iostream>
using namespace std;

class Interest
{
public:
    float principal, rate, time;

    void calculate()
    {
        float si = (principal * rate * time) / 100;

        cout << "Simple Interest = " << si;
    }
};

int main()
{
    Interest obj;

    cout << "Enter Principal: ";
    cin >> obj.principal;

    cout << "Enter Rate: ";
    cin >> obj.rate;

    cout << "Enter Time: ";
    cin >> obj.time;

    obj.calculate();

    return 0;
}
