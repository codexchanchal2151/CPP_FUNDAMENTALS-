#include <iostream>
using namespace std;

int main() {
    int r, c, a[100][100], b[100][100], sum[100][100];

    cout << "Enter number of rows (1-100): ";
    cin >> r;
    cout << "Enter number of columns (1-100): ";
    cin >> c;

    cout << "\nEnter elements of 1st matrix:\n";
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cout << "Enter element a[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements of 2nd matrix:\n";
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cout << "Enter element b[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> b[i][j];
        }
    }

    // Adding two matrices
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Displaying the result
    cout << "\nSum of two matrices is:\n";
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cout << sum[i][j] << "   ";
            if(j == c - 1)
                cout << endl;
        }
    }

    return 0;
}
