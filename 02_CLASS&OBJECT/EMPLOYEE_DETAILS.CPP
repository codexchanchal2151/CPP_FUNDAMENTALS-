#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int id;
    float salary;

    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1;

    e1.name = "Amit";
    e1.id = 101;
    e1.salary = 25000;

    e1.display();

    return 0;
}
