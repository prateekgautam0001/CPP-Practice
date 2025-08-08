#include <iostream>
using namespace std;

class Book {
private:
    string title;
    int copies;

public:
    void setBook(string t, int c) {
        title = t;
        copies = c;
    }

    void sellBook(int n) {
        if (n <= copies)
            copies -= n;
        else
            cout << "Not enough stock!\n";
    }

    void showStock() {
        cout << "Title: " << title << "\nCopies left: " << copies << endl;
    }
};

int main() {
    Book b;
    b.setBook("C++ Basics", 10);
    b.sellBook(3);
    b.showStock();
    return 0;
}
