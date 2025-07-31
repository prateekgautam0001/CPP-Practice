#include <iostream>
using namespace std;

enum Days { MON = 1, TUE = 2, WED = 3, THU = 4, FRI = 5 };

int main() {
    Days today = WED;
    cout << "Today is day number: " << today << endl;
    return 0;
}