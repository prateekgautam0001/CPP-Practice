#include <fstream>
#include <iostream>
#include <cctype>
int main(){
    std::ifstream in("file.txt");
    char c; int d=0,a=0,s=0;
    while(in.get(c)){
        if(std::isdigit(c)) d++;
        else if(std::isalpha(c)) a++;
        else if(std::isspace(c)) s++;
    }
    std::cout<<d<<" "<<a<<" "<<s;
}
