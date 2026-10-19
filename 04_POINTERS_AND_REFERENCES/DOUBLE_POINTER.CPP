#include <iostream>
using namespace std;

int main() {
    int num = 50;
    int *ptr = &num;       // Single pointer storing address of num
    int **dptr = &ptr;     // Double pointer storing address of ptr

    cout << "Value of num: " << num << endl;
    cout << "Value using single pointer (*ptr): " << *ptr << endl;
    cout << "Value using double pointer (**dptr): " << **dptr << endl;
    
    cout << "Address of num (&num): " << &num << endl;
    cout << "Address stored in ptr: " << ptr << endl;
    cout << "Address stored in dptr: " << dptr << endl;

    return 0;
}
