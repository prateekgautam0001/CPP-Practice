#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    float a = 3.5, b = 7.2;
    
    swap(x, y);
    swap(a, b);
    
    cout << "Swapped Integers: " << x << " " << y << endl;
    cout << "Swapped Floats: " << a << " " << b << endl;
    return 0;
}
