#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int main(){
    std::ifstream in("unsorted.txt");
    std::vector<std::string> v;
    std::string line;
    while(std::getline(in,line)) v.push_back(line);
    std::sort(v.begin(),v.end());
    std::ofstream out("sorted.txt");
    for(auto&s:v) out<<s<<"\n";
}
