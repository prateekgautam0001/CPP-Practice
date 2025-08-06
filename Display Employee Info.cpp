#include <iostream>
using namespace std;

void showEmployee(string name, string role = "Staff", int salary = 20000) {
    cout << name << " - " << role << " - Rs. " << salary << endl;
}

int main() {
    showEmployee("Amit", "Manager", 40000);
    showEmployee("Ravi");  // Uses default role and salary
    return 0;
}
