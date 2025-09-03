#include <fstream>
#include <iostream>
int main(){
    std::ofstream out("fp.txt");
    out<<"Hello12345";
    out.seekp(5);
    out<<"X";
    out.close();
}
