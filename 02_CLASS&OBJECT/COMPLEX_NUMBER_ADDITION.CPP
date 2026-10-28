#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    void setValues(float r, float i) {
        real = r;
        imag = i;
    }

    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, result;
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;
    c1.setValues(r1, i1);

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;
    c2.setValues(r2, i2);

    result = c1.add(c2);

    cout << "\nFirst Number: ";
    c1.display();

    cout << "Second Number: ";
    c2.display();

    cout << "Sum: ";
    result.display();

    return 0;
}
