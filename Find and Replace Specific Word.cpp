#include <fstream>
#include <iostream>
#include <string>
int main(){
    std::ifstream in("in.txt");
    std::ofstream out("out.txt");
    std::string w;
    while(in>>w){
        if(w=="foo") w="bar";
        out<<w<<" ";
    }
}
