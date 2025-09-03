#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
int main(){
    std::ifstream ifs("file3.txt");
    std::string word,line;
    int count=0;
    while(std::getline(ifs,line)){
        std::istringstream ss(line);
        while(ss>>word) count++;
    }
    std::cout<<count;
}
