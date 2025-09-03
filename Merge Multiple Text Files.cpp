#include <fstream>
int main(){
    std::ofstream out("merged.txt");
    for(int i=1;i<=3;i++){
        std::ifstream in("part"+std::to_string(i)+".txt");
        std::string s;
        while(std::getline(in,s)) out<<s<<"\n";
    }
}
