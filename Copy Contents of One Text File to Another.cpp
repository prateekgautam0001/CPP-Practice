#include <fstream>
#include <iostream>
#include <string>
int main(){
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");
    std::string line;
    while(std::getline(in,line)) out<<line<<"\n";
}
