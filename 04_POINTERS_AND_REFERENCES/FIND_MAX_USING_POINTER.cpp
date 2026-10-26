#include <iostream>
using namespace std;

int findMax(const int* arr, int size) {
    const int* ptr = arr;
    int maxVal = *ptr;

    for (int i = 1; i < size; ++i) {
        if (*(ptr + i) > maxVal) {
            maxVal = *(ptr + i);
        }
    }
    return maxVal;
}

int main() {
    int arr[] = {23, 78, 12, 95, 45, 67};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum element in array is: " << findMax(arr, size) << endl;

    return 0;
}
