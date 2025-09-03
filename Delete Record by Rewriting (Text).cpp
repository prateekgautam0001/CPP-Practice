#include <fstream>
#include <string>
int main(){
    std::ifstream in("data.txt");
    std::ofstream out("temp.txt");
    std::string line;
    while(std::getline(in,line))
        if(line!="DeleteMe") out<<line<<"\n";
}
