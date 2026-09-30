#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int marks;

    void grade()
    {
        cout << "Name: " << name << endl;

        if (marks >= 90)
            cout << "Grade: A";
        else if (marks >= 80)
            cout << "Grade: B";
        else if (marks >= 70)
            cout << "Grade: C";
        else if (marks >= 40)
            cout << "Grade: D";
        else
            cout << "Grade: F";
    }
};

int main()
{
    Student s1;

    cout << "Enter student name: ";
    cin >> s1.name;

    cout << "Enter marks: ";
    cin >> s1.marks;

    s1.grade();

    return 0;
}
