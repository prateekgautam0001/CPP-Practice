#include <fstream>
#include <iostream>
#include <string>
int main(){
    std::ofstream out("keys.txt");
    std::string s;
    while(std::getline(std::cin,s) && s!="!") out<<s<<"\n";
}
