#include <fstream>
#include <iostream>
#include <string>
int main(){
    std::ifstream ifs("file2.txt");
    std::string line;
    int count=0;
    while(std::getline(ifs,line)) count++;
    std::cout << count;
}
