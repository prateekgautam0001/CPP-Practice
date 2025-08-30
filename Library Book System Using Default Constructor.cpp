#include <iostream>
#include <vector>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book() {
        title = "Untitled";
        author = "Unknown";
    }

    void show() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    vector<Book> books(3);  // 3 default books
    for (auto &b : books)
        b.show();
    return 0;
}
