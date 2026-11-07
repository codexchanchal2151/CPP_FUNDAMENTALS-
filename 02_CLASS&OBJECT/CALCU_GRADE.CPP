#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNo;
    string name;
    float marks[5];
    float total;
public:
    void inputData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter marks for 5 subjects: ";
        total = 0;
        for(int i = 0; i < 5; i++) {
            cin >> marks[i];
            total += marks[i];
        }
    }
    
    void calculateGrade() {
        float percentage = total / 5.0;
        cout << "Roll No: " << rollNo << "\nName: " << name << "\nPercentage: " << percentage << "%";
        if(percentage >= 90) cout << "\nGrade: A+\n";
        else if(percentage >= 80) cout << "\nGrade: A\n";
        else if(percentage >= 70) cout << "\nGrade: B\n";
        else if(percentage >= 60) cout << "\nGrade: C\n";
        else cout << "\nGrade: D (Needs Improvement)\n";
    }
};

int main() {
    Student s;
    s.inputData();
    s.calculateGrade();
    return 0;
}
