#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
int main(){
    std::ifstream in("data.csv");
    std::string line;
    while(std::getline(in,line)){
        std::istringstream ss(line);
        std::string cell;
        while(std::getline(ss,cell,',')) std::cout<<cell<<"\t";
        std::cout<<"\n";
    }
}
