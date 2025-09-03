#include <fstream>
#include <iostream>
#include <string>
int main(){
    std::ifstream in("file11.txt");
    std::string line, key="search";
    int ln=1;
    while(std::getline(in,line)){
        if(line.find(key)!=std::string::npos) std::cout<<ln<<"\n";
        ln++;
    }
}
