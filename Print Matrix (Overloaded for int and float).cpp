#include <iostream>
using namespace std;

void printMatrix(int a[2][2]) {
    cout << "Integer Matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cout << a[i][j] << ((j == 1) ? "\n" : " ");
}

void printMatrix(float a[2][2]) {
    cout << "Float Matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cout << a[i][j] << ((j == 1) ? "\n" : " ");
}

int main() {
    int intMat[2][2] = {{1, 2}, {3, 4}};
    float floatMat[2][2] = {{1.1, 2.2}, {3.3, 4.4}};
    
    printMatrix(intMat);
    printMatrix(floatMat);
    return 0;
}
