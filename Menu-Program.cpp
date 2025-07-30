#include <iostream>
using namespace std;

int main() {
    int choice;

menu:
    cout << "\nMenu:\n1. Say Hello\n2. Say Bye\n3. Exit\nChoose: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Hello!\n";
        goto menu;
    } else if (choice == 2) {
        cout << "Bye!\n";
        goto menu;
    } else if (choice == 3) {
        cout << "Exiting...\n";
    } else {
        cout << "Invalid choice. Try again.\n";
        goto menu;
    }

    return 0;
}