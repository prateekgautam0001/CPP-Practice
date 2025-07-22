#include<iostream>
using namespace std;

int main(){
    char color;
    cout<<"Enter The Color Of Traffic Light (r = Red, y = Yellow, g = Green): ";cin>>color;

    switch (color){
        case 'r':
        case 'R':
            cout<<"Stop The Vehicle"<<endl;
            break;
        case 'y':
        case 'Y':
            cout<<"Start The Vehicle But Wait  Few Seconds: "<<endl;
            break;
        case 'g':
        case 'G':
            cout<<"Go Ahead"<<endl;
            break;

        default:
            cout<<"Invalid Color"<<endl;
            break;
    }
    return 0;
}