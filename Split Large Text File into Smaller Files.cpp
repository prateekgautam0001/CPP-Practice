#include <fstream>
#include <string>
int main(){
    std::ifstream in("large.txt");
    std::string line;
    int fileIdx=1, lineCount=0, maxLines=100;
    std::ofstream out("split1.txt");
    while(std::getline(in,line)){
        if(lineCount++==maxLines){
            fileIdx++;
            out.close();
            out.open("split"+std::to_string(fileIdx)+".txt");
            lineCount=0;
        }
        out<<line<<"\n";
    }
}
