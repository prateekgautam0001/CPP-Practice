#include <fstream>
#include <iostream>
#include <string>
struct Book{int id; char title[50];};
int main(){
    std::ofstream out("books.dat", std::ios::binary|std::ios::app);
    Book b{1,"C++ Book"};
    out.write((char*)&b,sizeof(b));
}
