#include <fstream>
#include <iostream>
#include <string>
int main(){
    std::ifstream ifs("file1.txt");
    std::string line;
    while(std::getline(ifs,line)) std::cout << line << "\n";
    ifs.close();
}
