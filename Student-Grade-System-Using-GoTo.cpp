#include <iostream>
using namespace std;

int main() {
    int marks;
check:
    cout << "Enter student marks (0–100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks. Try again.\n";
        goto check;
    }

    if (marks >= 90) cout << "Grade: A\n";
    else if (marks >= 75) cout << "Grade: B\n";
    else if (marks >= 60) cout << "Grade: C\n";
    else if (marks >= 40) cout << "Grade: D\n";
    else cout << "Grade: F (Fail)\n";

    return 0;
}