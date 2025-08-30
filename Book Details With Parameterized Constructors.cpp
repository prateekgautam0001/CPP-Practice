#include <iostream>
using namespace std;

class Book {
private:
    string title;
    int pages;

public:
    Book(string t, int p) {
        title = t;
        pages = p;
    }

    void display() {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

int main() {
    Book b("C++ Primer", 980);
    b.display();
    return 0;
}
