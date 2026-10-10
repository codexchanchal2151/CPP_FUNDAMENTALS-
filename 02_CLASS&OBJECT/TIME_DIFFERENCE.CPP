#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;
public:
    void getTime() {
        cout << "Enter hours, minutes and seconds: ";
        cin >> hours >> minutes >> seconds;
    }
    
    void displayTime() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    
    void addTime(Time t1, Time t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + (seconds / 60);
        seconds %= 60;
        hours = t1.hours + t2.hours + (minutes / 60);
        minutes %= 60;
    }
};

int main() {
    Time t1, t2, t3;
    cout << "For First Time:\n";
    t1.getTime();
    cout << "For Second Time:\n";
    t2.getTime();
    
    t3.addTime(t1, t2);
    cout << "Total Time: ";
    t3.displayTime();
    return 0;
}
