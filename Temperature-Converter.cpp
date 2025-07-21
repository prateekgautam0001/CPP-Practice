#include<iostream>
using namespace std;

int main(){
    float celcius, feranite;
    cout<<"Enter the temperature in celcius: "<<endl;cin>>celcius;
    feranite = (celcius * 9/5) + 32;
    cout<<"Temprateure in feranite: "<<feranite<<endl;

    return 0;
}