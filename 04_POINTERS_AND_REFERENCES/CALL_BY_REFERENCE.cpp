#include <iostream>
using namespace std;

// Function using reference variables
void updateValue(int &ref) {
    ref += 10; // Caller function ke original variable ko modify karega
}

int main() {
    int num = 25;

    cout << "Value before function call: " << num << endl;

    updateValue(num);

    cout << "Value after function call: " << num << endl;

    return 0;
}
