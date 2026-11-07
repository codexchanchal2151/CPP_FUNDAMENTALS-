#include <iostream>
using namespace std;

class Matrix {
    int mat[3][3];
public:
    void accept() {
        cout << "Enter elements of 3x3 matrix:\n";
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                cin >> mat[i][j];
    }
    
    void display() {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
    
    Matrix add(Matrix m) {
        Matrix temp;
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
        return temp;
    }
};

int main() {
    Matrix m1, m2, m3;
    cout << "For First Matrix:\n";
    m1.accept();
    cout << "For Second Matrix:\n";
    m2.accept();
    
    m3 = m1.add(m2);
    cout << "Sum of Matrices:\n";
    m3.display();
    return 0;
}
