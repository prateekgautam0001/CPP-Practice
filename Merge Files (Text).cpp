#include <fstream>
#include <string>
int main(){
    std::ofstream out("merged.txt");
    for(auto f:{"f1.txt","f2.txt"}){
        std::ifstream in(f);
        std::string l;
        while(std::getline(in,l)) out<<l<<"\n";
    }
}
