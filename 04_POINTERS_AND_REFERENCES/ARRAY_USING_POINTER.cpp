#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Pointer pointing to the first element
    int *ptr = arr;

    cout << "Traversing array using pointer arithmetic:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element at index " << i << ": " << *(ptr + i) << endl;
    }

    return 0;
}
