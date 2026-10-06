#include <iostream>
using namespace std;

int main() {
    double principal, rate, time, interest;
    
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Annual Interest Rate (%): ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;
    
    interest = (principal * rate * time) / 100;
    
    cout << "Simple Interest = " << interest << endl;
    cout << "Total Amount = " << principal + interest << endl;
    
    return 0;
}
